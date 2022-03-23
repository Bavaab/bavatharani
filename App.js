import React, {useState,useEffect, Component} from "react";
import loading from './loading';
import LifecycleA from "./practice/LifecycleA";
import Tours from './Tours';
import items from'./menu/data'
import Catagories from "./menu/Catagories";
import Menu from "./menu/Menu";
//  class App extends Component {
 // render(){
  //  return(
   //   <div className="App">
   //    {/* <LifecycleA /> */}
   //   </div>
   // )
 // }
//}
const allCategories =['all',...new Set(items.map((item) => item.Category))];
function App(){
  const [menuItems, setMenuItems] = useState(items);
  const [catagories, setCatagories] = useState(allCategories);


  const filterItems = (Category) => {
    if(Category === 'all'){
      setMenuItems(items)
      return;
    }
    const newItems = items.filter((item)=> item.Category===Category) 
    setMenuItems(newItems)
  };

  return(
    <main>
      <section className="menusection">
        <div className="title">
          <h2>our menu</h2>
          <div className="underline"></div>
        </div>
        <Catagories catagories={catagories}  filterItems={filterItems}/>
        <Menu items={menuItems}/>
      </section>
      </main>
  )
}
export default App;

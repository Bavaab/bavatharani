import React from 'react'

const Catagories =({catagories,filterItems}) => {
    return (
        <div className='btn-container'>
            {catagories.map((Catagory,index)=>{
                return(
                <button type='button' className='filter-btn' key={index}onClick={() =>filterItems(Catagory)}>
                    {Catagory}
                </button>
                );
            })}
        </div>
    );
};
export default Catagories
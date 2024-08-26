import { useState, useEffect } from 'react'


import './App.css'

function App() {

  let [timesRendered, setTimesRendered] = useState(() => 0)


   useEffect(() => {
      console.log("This will only be triggered on render");
   }, [timesRendered]);


   const increaseTimesRendered = () => {
     setTimesRendered(++timesRendered);
     console.log(timesRendered);
   }

  return(
    <>
       <button onClick={increaseTimesRendered}>Click Me!</button>
    </>
  );
}

export default App

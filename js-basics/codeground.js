function generateJSON() {
   const selectedLanguage = document.getElementById("language").value;
   const version = selectedLanguage.split('-')[1] || "";
   const language = selectedLanguage.split('-')[0] || "";
   const codeContent = document.getElementById("codeInput").value;
   const fileExtension = language == 'python'?'py':"";
   
   const jsonObject = {
       "language": language,
       "version": version,
       "files": [
           {
               "name": `my_cool_code.${fileExtension}`,
               "content": codeContent
           }
       ],
       "stdin": "",
       "args": [],
       "compile_timeout": 10000,
       "run_timeout": 3000,
       "compile_memory_limit": -1,
       "run_memory_limit": -1
   };

   const jsonOutput = document.getElementById("jsonOutput");
   jsonOutput.value = JSON.stringify(jsonObject, null, 2);
   
}
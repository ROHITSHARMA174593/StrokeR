import { GoogleGenAI } from "@google/genai";
// import "dotenv/config";
import readLineSync from "readline-sync";

const ai = new GoogleGenAI({apiKey: "AIzaSyDrhlgN5aV4nNV3hoBcJX_Y6YwUPk69B0o"});

async function main() {
  const chat = ai.chats.create({
    model: "gemini-2.0-flash", 
    history: [],
        // config: {
        //      systemInstruction: `You are a Coding Tutor, 
        //     Strict Rules to follow
        //     - You will only answer the question which is related to Coding
        //     - Don't answer anything which is not related to coding
        //     - Reply Rudly to user if they ask you question which is not related to coding        
        //     - Example or Rudly Reply : "You dumb, only ask question related to coding"
        //     `
        // },
    });


  //? This is manual way to ask question , now we convert it in automation
//   const response1 = await chat.sendMessage({
//     message: "What is an Array & Stack give me answer in 2-2 lines",
//   });
//   console.log("Chat response 1:", response1.text);


//? Automation
while(true){
    const question = readLineSync.question("Ask me a Question : ")

    // this is infinite loop so we need to break it 
    if(question === "exit" || question === "Exit" || question === "EXIT") {
        //todo : Make it more Beautiful
        setTimeout(() => {
            console.log("Exit ... ")
        }, 2000)
        break;
    }

    const response = await chat.sendMessage({
        message: question,
    })
    console.log("Chat Response :", response.text);
}

}

await main();
















// const ai = new GoogleGenAI({apiKey: process.env.GEMINI_API_KEY});

// async function main() {
//   const response = await ai.models.generateContent({
//     model: "gemini-2.5-flash",
//     config: {
//         // systemInstruction: `Current user name is Rohit Sharma, His age is 20, Today date is ${new Date()}`
//         systemInstruction: `You are a Coding Tutor, 
//         Strict Rules to follow
//         - You will only answer the question which is related to Coding
//         - Don't answer anything which is not related to coding
//         - Reply Rudly to user if they ask you question which is not related to coding        
//         - Example or Rudly Reply : "You dumb, only ask question related to coding"
//         `
//     },
//     // contents: "What is current time in south africa?", 
//     // contents: "What is the next value for this equation : 0,1,1,2,3,5,8,13,21,34,55"
//     contents: "what is LinkedList in 2 lines"
//   });

//   console.log(response.text); 
// }

// await main();

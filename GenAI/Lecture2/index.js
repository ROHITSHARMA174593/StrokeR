import { GoogleGenAI } from "@google/genai";

const ai = new GoogleGenAI({apiKey:"AIzaSyD900Xj9tYqzm3th54EA9WYn0He7iINS_U"});

async function main() {
  const response = await ai.models.generateContent({
    model: "gemini-2.5-flash",
    contents: [
        {
            role:'user',
            parts:[{text: "What is My Name"}]
        },
        {
            role:"model",
            parts:[{text: "As an AI i don't have any personal information about you, so i don't know your name. You can tell me if you'd like!"}]
        },
        {
            role:"user",
            parts:[{text: "My name is Rohit Sharma"}]
        },
        {
            role:"model",
            parts:[{text: "Nice to meet you, Rohit Sharma! Thanks for letting me know."}]
        },
        {
            role:"user",
            parts:[{text: "What is my name?"}]
        }
    ],
  });
  console.log(response.text);
}


await main();
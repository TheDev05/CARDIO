document
  .getElementById("sendMessageBtn")
  .addEventListener("click", sendMessage);

async function sendMessage() {
  const apiUrl =
    "http://cloud.smsindiahub.in/api/mt/SendSMS?APIKey=YzWjhJR5rkix0Af6SSo8gQ&senderid=WEBSMS&channel=Promo&DCS=0&flashsms=0&number=917764897552&text=test%20message&route=5&PEId=1";

  try {
    const response = await fetch(apiUrl, {
      method: "POST", // You can change this to 'POST' if needed
      headers: {
        "Content-Type": "application/json", // Adjust headers if necessary
      },
    });

    if (!response.ok) {
      throw new Error("Network response was not ok" + response.statusText);
    }

    const data = await response.json(); // Adjust this if the API returns non-JSON data
    console.log(data);
  } catch (error) {
    console.error("There has been a problem with your fetch operation:", error);
  }
}

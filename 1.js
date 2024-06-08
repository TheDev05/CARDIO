document
  .getElementById("sendMessageBtn")
  .addEventListener("click", sendMessage);

function sendMessage() {
  const apiUrl = "https://graph.facebook.com/v19.0/303543622850608/messages";
  const authToken =
    "EAAGv1a6QRKkBO4RFHROMfZCWDMSLgLMP4JAhhRtGq5NZBcaNHMWSzZAtX1qqCaV4K9cScXuXJBPoKmFE0cnT7tZAZA6I6yGYytm7wejCbnVzEoq5ZAXqqTtoGXMZAcCcZA30AI89Fo4dv1qxPPZCh3RYk2doGoYZByg3NxZAYe714lMIDuJUSHAfc9vXPZAZAfh7xNSekr4AeZC5M4N5C3XP4QQdQZD";

  const messageBody = {
    messaging_product: "whatsapp",
    recipient_type: "individual",
    to: "+917764897552",
    type: "text",
    text: {
      preview_url: false,
      body: "auto matic",
    },
  };

  const fetchCall = async () => {
    try {
      const response = await fetch(apiUrl, {
        method: "POST",
        headers: {
          Authorization: `Bearer ${authToken}`,
          "Content-Type": "application/json",
        },
        body: JSON.stringify(messageBody),
      });

      if (!response.ok) {
        console.log(`HTTP error! status: ${response.status}`);
      } else alert("message sent!");

      const data = await response.json();
      console.log(data);
    } catch (error) {
      console.log(error);
    }
  };

  fetchCall();
}

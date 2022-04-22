const form = document.querySelector("form");
const addShow = document.querySelector("#addShow");

form.addEventListener("submit", async (e) => {
    try {
        e.preventDefault();
        addShow.innerText = "";
        const keyword = form.elements.query.value;
        const config = { params: { q: keyword } };
        const res = await axios.get(`https://api.tvmaze.com/search/shows?`, config);
        createImages(res.data);
        form.elements.query.value = "";
    } catch (err) {
        console.log("Error: ", err);
        addShow.innerText = "No Search Results Are Found.";
    }
});

function createImages(res) {
    for (let result of res) {
        const image = document.createElement("img");
        const title = document.createElement("p");
        const show = document.createElement("div");
        title.id = "title";
        show.id = "show";
        title.innerText = result.show.name;
        image.src = result.show.image.original;
        show.append(image, title);
        addShow.append(show);
    }
}

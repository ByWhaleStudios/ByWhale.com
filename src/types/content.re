type contentType = {
  title: string,
  content: list(list(string)),
};

type contentBlock = {
  news: contentType,
  team:contentType,
  work: contentType,
  services:contentType,
  about: contentType,
  address: contentType,
  follow: contentType,
};

let contentBlockFn = (theme) => {
  news: {
    title: theme === Theme.Retro ? "1.News" : "News",
    content: [
      [
        "bywhale. has a new home! We are now up and running in Dumbo. find us at 68 Jay Street, Brooklyn, NY, 11201. We are also happy to announce that we have partnered up with Real & Open and are working on an exciting technology product for educators. Stay tuned!"
      ],
    ],
  },
  team: {
    title: theme === Theme.Retro ? "2.Team" : "Team",
    content: [
      [
        "Lama: Greg I need a little change.",
        "Greg: Ughhh sure. Whats up?",
        "Lama: Make the logo 5 points bigger.",
        "Greg: Wait what? I don't understand.",
        "Lama: What don't you understand.",
        "Greg: What the hell is a point?"
      ],
    ]
  },
  work: {
    title: theme === Theme.Retro ? "3.Work" : "Work",
    content: [
      [
        "Click Code Create",
        "Brochure design and identity for a 10 week online coding course that helps students learn the principles of web development and coding.",
      ],
      [
        "Illume Positive reminder app",
        "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris.",
      ]
    ]
  },
  services: {
    title: theme === Theme.Retro ? "4.Services" : "Services",
    content: [
      [
        "Art Direction",
        "Branding",
        "Consultancy",
        "Concept Development",
        "Concept Development",
        "Design",
      ],
      [
        "Art Direction",
        "Branding",
        "Consultancy",
        "Concept Development",
        "Concept Development",
        "Design",
      ],
      [
        "Art Direction",
        "Branding",
        "Consultancy",
        "Concept Development",
        "Concept Development",
        "Design",
      ],
      [
        "Art Direction",
        "Branding",
        "Consultancy",
        "Concept Development",
        "Concept Development",
        "Design",
      ],
    ]
  },
  about: {
    title: theme === Theme.Retro ? "5.About" : "About",
    content: [
      ["bywhale. is a creative and technology studio based in New York City providing communication, design, technology and data across multiple platforms."]
    ]
  },
  address: {
    title: theme === Theme.Retro ? "6.Address" : "Address",
    content: [
      [
        "68 Jay Street",
        "Suite 201",
        "New York, NY 11201",
      ]
    ]
  },
  follow: {
    title: theme === Theme.Retro ? "7.Follow" : "Follow",
    content: [
      [
        "Medium",
        "Linkedin",
        "Instagram",
        "Github",
      ]
    ]
  }
};

let textSocialMediaToHref = (socialMediaText) =>
  switch(socialMediaText){
  | "Medium" => "https://medium.com/@bywhale."
  | "Linkedin" => "https://www.linkedin.com/company/bywhale/"
  | "Instagram" => "https://www.instagram.com/bywhale.nyc"
  | "Github" => "https://github.com/ByWhaleStudios"
  | _ => ""
  };
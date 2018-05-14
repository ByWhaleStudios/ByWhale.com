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
    title: theme === Theme.AtariBlue ? "5.News" : "News",
    content: [
      [
        "bywhale. has recently partnered up with Real & Open and are working on an exciting technology product for educators. Stay tuned!"
      ],
    ],
  },
  team: {
    title: theme === Theme.AtariBlue ? "2.Team" : "Team",
    content: []
  },
  work: {
    title: theme === Theme.AtariBlue ? "3.Work" : "Work",
    content: [
      [
        "Click Code Create",
        "Brochure design and identity for code_U coding program.",
      ],
      [
        "illume",
        "Mobile app for moodlifting.",
      ]
    ]
  },
  services: {
    title: theme === Theme.AtariBlue ? "4.Services" : "Services",
    content: [
      [
        "Art Direction",
        "App Design",
        "Agile Software Development",
        "Back End Development",
        "Branding",
      ],
      [
        "Campaign Branding",
        "DevOps",
        "Data Science Consulting",
        "Front End Development",
        "Identity Design",
      ],
      [
        "Logo Design",
        "Package Design",
        "Print Design",
        "UI Design",
        "UX Research",
      ],
      [
        "Visual Identity",
        "Web Design",
        "Web Development",
        "Web Consulting",
      ],
    ]
  },
  about: {
    title: theme === Theme.AtariBlue ? "1.About" : "About",
    content: [
      ["bywhale. is a creative and technology studio based in New York City providing communication, design, technology and data across multiple platforms."]
    ]
  },
  address: {
    title: theme === Theme.AtariBlue ? "6.Address" : "Address",
    content: [
      [
        "68 Jay Street",
        "Suite 201",
        "New York, NY 11201",
      ]
    ]
  },
  follow: {
    title: theme === Theme.AtariBlue ? "7.Follow" : "Follow",
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
import React from 'react'
const getRandomSize = () => {
    const min = 300;
    const max = 1000;
    const width = Math.floor(Math.random() * (max - min + 1)) + min;
    const height = Math.floor(Math.random() * (max - min + 1)) + min;
    return { width, height };
};

const images = Array.from({ length: 10 }, () => getRandomSize());
function masonry() {
  return (
    <div className="d-masonry">
      {images.map((size, index) => (
        <div className="gridss" key={index}>
          <img
            src={`https://random.imagecdn.app/${size.width}/${size.height}`}
            alt={`Random ${index}`}
            style={{ width: '100%', height: 'auto' }}
          />
        </div>
      ))}
    </div>
  )
}

export function MasonryX(){
    return (
        <div className="d-masonryx max-w-[100%]">
          {images.map((size, index) => (
              <img className="masonry-brick"
                src={`https://random.imagecdn.app/${size.width}/${size.height}`}
                alt={`Random ${index}`}
              />
          ))}
        </div>
    )
}

export default masonry
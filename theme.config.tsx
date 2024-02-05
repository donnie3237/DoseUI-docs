import React from 'react'
import { DocsThemeConfig , useConfig} from 'nextra-theme-docs'
import { useRouter } from 'next/router'


const config: DocsThemeConfig = {
  useNextSeoProps() {
    return {
      titleTemplate: '%s | DoseUI'
    }
  },
  head: () => {
    const { asPath, defaultLocale, locale } = useRouter()
    const { frontMatter } = useConfig()
    const url ='https://ui.dxse.site' + (defaultLocale === locale ? asPath : `/${locale}${asPath}`)
    const logoPath = '/dose.svg'
    const ogURL = '/og.png'
    return (
      <>
        <meta property="og:url" content={url} />
        <meta property="og:title" content={frontMatter.title || 'DoseUI'} />
        <meta
          property="og:description"
          content={frontMatter.description || 'DoseUI is a modern UI framework designed to be fast, minimal, and easy to use. Build beautiful interfaces with less code.'}
        />
        <meta name='viewport' content='width=device-width,initial-scale=1' />
        <link rel='icon' type='image/svg+xml' href={logoPath} />
        <link rel='canonical' href={url} />
        <meta name='title' content={frontMatter.title || 'DoseUI'} />
        <meta name='description' content={frontMatter.description || 'DoseUI is a modern UI framework designed to be fast, minimal, and easy to use. Build beautiful interfaces with less code.'}/>
        <meta property='og:url' content={url} />
        <meta property='og:image' content={ogURL} />
        <meta property='twitter:card' content='summary_large_image' />
        <meta property='twitter:url' content={url} />
        <meta property='twitter:title' content={frontMatter.title || 'DoseUI'}  />
        <meta property='twitter:description' content={frontMatter.description || 'DoseUI is a modern UI framework designed to be fast, minimal, and easy to use. Build beautiful interfaces with less code.'} />
        <meta property='twitter:image' content={ogURL} />
      </>
    )
  },
  logo: (
    <>
      <img style={{ marginLeft: '.4em', fontWeight: 800 , height: "30px" , width: "30px"}} src="/dose.svg" alt="" />
      <span style={{ marginLeft: '.4em', fontWeight: 800 }}>
        DoseUI
      </span>
    </>
  ),
  project: {
    link: 'https://github.com/donnie3237/DoseUI',
  },
  docsRepositoryBase: 'https://github.com/donnie3237/DoseUI-docs',
  footer: {
    component: (
      <footer style={{marginBottom: "20px" , display: 'flex' , justifyContent:'center', alignItems:'center' , width: "100vw"}}>
        <p className="pb-5 px-6 text-xs text-gray-500 dark:text-gray-400">© 2024 Dose from another planet. All rights reserved.</p>
      </footer>
    ),
  },
  darkMode: false,
  nextThemes: {
    defaultTheme: 'light',
    forcedTheme: 'light',
  },
}

export default config

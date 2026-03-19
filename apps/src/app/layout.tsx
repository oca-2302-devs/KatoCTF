import type { Metadata } from "next";
import { Geist, Geist_Mono } from "next/font/google";
import "./globals.css";

const geistSans = Geist({
  variable: "--font-geist-sans",
  subsets: ["latin"],
});

const geistMono = Geist_Mono({
  variable: "--font-geist-mono",
  subsets: ["latin"],
});

export const metadata: Metadata = {
  title: {
    default: "KatoCTF",
    template: "%s | KatoCTF",
  },
  description:
    "KatoCTF is a beginner-friendly Capture The Flag (CTF) platform designed to provide a competitive and educational environment for cybersecurity enthusiasts. It offers a variety of challenges that test participants' skills in areas such as cryptography, reverse engineering, web security, and more. Whether you're a beginner or an experienced hacker, KatoCTF provides an engaging platform to learn, practice, and compete in the world of cybersecurity.",
};

export default function RootLayout({
  children,
}: Readonly<{
  children: React.ReactNode;
}>) {
  return (
    <html lang="ja">
      <body className={`${geistSans.variable} ${geistMono.variable} antialiased`}>{children}</body>
    </html>
  );
}

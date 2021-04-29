#pragma once
#include<string>
#include<vector>
#include<iostream>
#include<SDL_mixer.h>

enum type
{
	MUSIC, SFX
};

class Audio
{
public:
	Audio();
	~Audio();
	bool LoadAudio(std::string fileName, int id, type AudioType, int volume);
	void PlayMusicTrack(int id, int loopNumber);
	void PlaySFX(int id, int loopNumber, int channel);
private:
	std::vector<Mix_Chunk*> m_sfx;
	std::vector<Mix_Music*> m_music;
	Mix_Music* pMusic;
	Mix_Chunk* pChunk;
};
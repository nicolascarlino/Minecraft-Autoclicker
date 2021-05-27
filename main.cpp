// Libs
#include<Windows.h>
#include<stdlib.h>
#include<iostream>


// Self Destruct Things
#define _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING

// Colors
void setcolor(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
}

// Main
int main(){
        // Pre-Autoclick
        // Menu
        system("cls");
        SetConsoleTitle("[Apollyon] | By Kenyh");
        setcolor(14);
        std::cout<<"                                        _____         _ _             "<< std::endl;
        std::cout<<"                                       |  _  |___ ___| | |_ _ ___ ___ "<< std::endl;
        std::cout<<"                                       |     | . | . | | | | | . |   |"<< std::endl;
        std::cout<<"                                       |__|__|  _|___|_|_|_  |___|_|_|"<< std::endl;
        std::cout<<"                                             |_|         |___|        "<< std::endl;
        setcolor(4);
        std::cout<<"                                                               by kenyh                                                                                                                                                                                                                              "<< std::endl;

        // Choose CPS
        int left_cps, right_cps;

        std::cout<<"[+] How much CPS do you want do? (Left Clicker)"<<std::endl;
        std::cout<<" -> ";
        setcolor(14);
        std::cin>>left_cps;

        if(left_cps > 20){
            MessageBox(NULL, "Maximum CPS is 20!", "[Apollyon] | by Kenyh", 0);
            main();
        }

        setcolor(4);
        std::cout<<"[+] How much CPS do you want do? (Right Clicker)"<<std::endl;
        std::cout<<" -> ";
        setcolor(14);
        std::cin>>right_cps;

        if(right_cps > 20){
            MessageBox(NULL, "Maximum CPS is 20!", "[Apollyon] | by Kenyh", 0);
            main();
        }


        system("cls");
        setcolor(14);
        std::cout<<"                                        _____         _ _             "<< std::endl;
        std::cout<<"                                       |  _  |___ ___| | |_ _ ___ ___ "<< std::endl;
        std::cout<<"                                       |     | . | . | | | | | . |   |"<< std::endl;
        std::cout<<"                                       |__|__|  _|___|_|_|_  |___|_|_|"<< std::endl;
        std::cout<<"                                             |_|         |___|"<< std::endl;
        setcolor(4);
        std::cout<<"                                                               by kenyh                                                                                                                                                                                                                                      "<< std::endl;

        // Toggle Defs
        bool right_clicker_toggled, left_clicker_toggled;

        // Instructions
        setcolor(4);
        std::cout<<"F4 -> ";
        setcolor(14);
        std::cout<<"Self Destruct"<<std::endl;

        setcolor(4);
        std::cout<<"F5 -> ";
        setcolor(14);
        std::cout<<"Hide or Show Menu"<<std::endl;

        setcolor(4);
        std::cout<<"F6 -> ";
        setcolor(14);
        std::cout<<"Switch to Alternative Mode (Break Blocks and Eat)"<<std::endl;

        setcolor(4);
        std::cout<<"F7 -> ";
        setcolor(14);
        std::cout<<"Switch to Normal mode                                                                                                                                                                                                                                     "<<std::endl;


        // On and Off status Display
        setcolor(4);
        std::cout<<"[+] Left Clicker -> ";
        setcolor(14);
        std::cout<<left_cps<<std::endl;

        setcolor(4);
        std::cout<<"[+] Right Clicker -> ";
        setcolor(14);
        std::cout<<right_cps<<std::endl;
        
        // Some definitions
        bool normal_mode = true;


        // Autoclick
        while (true){
            // Delay Function (Randomizer)
            int left_delay = (2000 / left_cps) / 1;
            int right_delay = (2000 / right_cps) / 1;

            // Normal Mode, Left
            if(left_clicker_toggled){
                if(normal_mode == true){
                    if(GetAsyncKeyState(VK_LBUTTON)){
                        HWND Window = GetForegroundWindow(); // Get Window
                        if(FindWindowA(("LWJGL"), nullptr) == GetForegroundWindow()) {
                            SendMessageW(GetForegroundWindow(), WM_LBUTTONDOWN, MK_LBUTTON, MAKELPARAM(0, 0));
                            SendMessageW(GetForegroundWindow(), WM_LBUTTONUP, MK_LBUTTON, MAKELPARAM(0, 0));
                            Sleep(rand() % left_delay); // Sleep Delay Time
                        }
                    }
                }
            }

                // Alternative Mode, Left
                if(normal_mode == false){
                    if(GetAsyncKeyState(VK_LBUTTON)){
                        HWND Window = GetForegroundWindow();
                        if (FindWindowA(("LWJGL"), nullptr) == GetForegroundWindow()) {
                            SendMessageW(GetForegroundWindow(), WM_LBUTTONDOWN, MK_LBUTTON, MAKELPARAM(0, 0));
                            Sleep(rand() % left_delay); // Sleep Delay Time
                        }
                    }
                }



            // Normal Mode, Right
            if(right_clicker_toggled){
                if(normal_mode == true){
                    if(GetAsyncKeyState(VK_RBUTTON)){
                        HWND Window = GetForegroundWindow(); // Get Window
                        if(FindWindowA(("LWJGL"), nullptr) == GetForegroundWindow()) {
                            SendMessageW(GetForegroundWindow(), WM_RBUTTONDOWN, MK_RBUTTON, MAKELPARAM(0, 0));
                            SendMessageW(GetForegroundWindow(), WM_RBUTTONUP, MK_RBUTTON, MAKELPARAM(0, 0));
                            Sleep(rand() % right_delay); // Sleep Delay Time
                        }
                    }
                }
            }

                // Alternative Mode, Right
                if(normal_mode == false){
                    if(GetAsyncKeyState(VK_RBUTTON)){
                        HWND Window = GetForegroundWindow();
                        if (FindWindowA(("LWJGL"), nullptr) == GetForegroundWindow()) {
                            SendMessageW(GetForegroundWindow(), WM_RBUTTONDOWN, MK_RBUTTON, MAKELPARAM(0, 0));
                            Sleep(rand() % right_delay); // Sleep Delay Time
                        }
                    }
                }

                        // Menu Options
            // Hide and Show Window
            if(GetAsyncKeyState(VK_F5)){

                Sleep(500);
            }


            // Switch modes
            if(GetAsyncKeyState(VK_F6)){
                if(normal_mode == true){
                    normal_mode = false;
                } 

                Sleep(200);     
            }


            if(GetAsyncKeyState(VK_F7)){
                if(normal_mode == false){
                    normal_mode = true;
                }

                Sleep(200);
            }


            // Self Destruct
            if(GetAsyncKeyState(VK_F4)){
                MessageBox(NULL, "Apollyon sucefully destructed", "[Apollyon] | by Kenyh", 0);

                // Delete Prefetch
                std::string command = "del /Q ";
                std::string path = "C:\\Windows\\Prefetch\\APOLLYON.*.pf";
                system(command.append(path).c_str());

                // Clean DNS Cache
                BOOL (WINAPI *DoDnsFlushResolverCache)();
                *(FARPROC *) &DoDnsFlushResolverCache = GetProcAddress(LoadLibrary("dnsapi.dll"), "DnsFlushResolverCache");
                if (!DoDnsFlushResolverCache) return FALSE;
                return DoDnsFlushResolverCache();

                return 0;
            }
        }
}
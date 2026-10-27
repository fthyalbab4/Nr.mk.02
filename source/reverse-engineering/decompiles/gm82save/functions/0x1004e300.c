// rea decompile_all
// name: FUN_1004e300
// address: 0x1004e300
// body: available
// range: 0x1004e300-0x1004e321 inclusive
// range: 0x1004e330-0x1004e35e inclusive
// range: 0x1004e360-0x1004e772 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __fastcall FUN_1004e300(LPVOID param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  HANDLE hHeap;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (param_1 != (LPVOID)0x0) {
    if ((*(uint *)((int)param_1 + param_2 * 4 + 4) & 1) == 0) {
      uVar5 = 0;
      do {
        if (uVar5 < 7) {
          uVar2 = 1;
          do {
            uVar4 = uVar2 >> ((byte)uVar5 & 0x1f);
            uVar2 = uVar2 + 1;
          } while (uVar4 == 0);
LAB_1004e330:
          uVar5 = uVar5 + 1;
        }
        else {
          SwitchToThread();
          if (uVar5 < 0xb) goto LAB_1004e330;
        }
      } while ((*(uint *)((int)param_1 + param_2 * 4 + 4) & 1) == 0);
    }
    iVar3 = param_2 + 1;
    if (iVar3 == 0x1f) {
      if ((*(uint *)((int)param_1 + 4) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 4);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 4);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 4) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 8) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 8);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 8);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 8) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0xc) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0xc);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0xc);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0xc) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x10) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x10);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x10);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x10) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x14) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x14);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x14);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x14) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x18) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x18);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x18);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x18) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x1c) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x1c);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x1c);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x1c) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x20) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x20);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x20);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x20) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x24) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x24);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x24);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x24) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x28) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x28);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x28);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x28) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x2c) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x2c);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x2c);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x2c) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x30) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x30);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x30);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x30) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x34) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x34);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x34);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x34) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x38) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x38);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x38);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x38) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x3c) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x3c);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x3c);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x3c) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x40) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x40);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x40);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x40) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x44) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x44);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x44);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x44) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x48) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x48);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x48);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x48) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x4c) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x4c);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x4c);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x4c) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x50) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x50);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x50);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x50) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x54) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x54);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x54);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x54) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x58) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x58);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x58);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x58) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x5c) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x5c);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x5c);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x5c) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x60) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x60);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x60);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x60) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 100) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 100);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 100);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 100) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x68) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x68);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x68);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x68) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x6c) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x6c);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x6c);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x6c) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x70) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x70);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x70);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x70) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x74) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x74);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x74);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x74) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
      if ((*(uint *)((int)param_1 + 0x78) & 2) == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x78);
        do {
          LOCK();
          uVar2 = *(uint *)((int)param_1 + 0x78);
          bVar6 = uVar5 == uVar2;
          if (bVar6) {
            *(uint *)((int)param_1 + 0x78) = uVar5 | 4;
            uVar2 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar2;
        } while (!bVar6);
        if ((uVar2 & 2) == 0) goto LAB_1004e736;
      }
    }
    else {
      uVar5 = *(uint *)((int)param_1 + param_2 * 4 + 4);
      do {
        puVar1 = (uint *)((int)param_1 + param_2 * 4 + 4);
        LOCK();
        uVar2 = *puVar1;
        bVar6 = uVar5 == uVar2;
        if (bVar6) {
          *puVar1 = uVar5 | 2;
          uVar2 = uVar5;
        }
        UNLOCK();
        uVar5 = uVar2;
      } while (!bVar6);
      if ((uVar2 & 4) == 0) goto LAB_1004e736;
      if (param_2 < 0x1d) {
        do {
          if ((*(uint *)((int)param_1 + iVar3 * 4 + 4) & 2) == 0) {
            uVar5 = *(uint *)((int)param_1 + iVar3 * 4 + 4);
            do {
              puVar1 = (uint *)((int)param_1 + iVar3 * 4 + 4);
              LOCK();
              uVar2 = *puVar1;
              bVar6 = uVar5 == uVar2;
              if (bVar6) {
                *puVar1 = uVar5 | 4;
                uVar2 = uVar5;
              }
              UNLOCK();
              uVar5 = uVar2;
            } while (!bVar6);
            if ((uVar2 & 2) == 0) goto LAB_1004e736;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0x1e);
      }
    }
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,param_1);
  }
LAB_1004e736:
  return param_1 == (LPVOID)0x0;
}

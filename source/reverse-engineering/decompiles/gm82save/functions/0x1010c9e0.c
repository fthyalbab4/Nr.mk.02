// rea decompile_all
// name: FUN_1010c9e0
// address: 0x1010c9e0
// body: available
// range: 0x1010c9e0-0x1010cbdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010c9e0(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  HANDLE hHeap;
  LPVOID lpMem;
  undefined4 *puVar4;
  int iVar5;
  uint unaff_ESI;
  uint uVar6;
  uint local_24;
  LPVOID local_20;
  uint local_1c;
  uint local_18;
  uint local_14;

  uVar6 = *param_3;
  if (uVar6 == 0xffffffff) {
    lpMem = (LPVOID)0x0;
  }
  else {
    local_1c = param_3[2];
    lpMem = (LPVOID)param_3[1];
    if (local_1c < 8) {
      if (local_1c != 0) {
        local_18 = 0;
        do {
          if (*(char *)((int)lpMem + local_18) == '\0') goto LAB_1010cb7b;
          local_18 = local_18 + 1;
        } while (local_1c != local_18);
      }
    }
    else {
      uVar3 = ((int)lpMem + 3U & 0xfffffffc) - (int)lpMem;
      local_14 = local_1c;
      if (uVar3 != 0) {
        local_18 = 0;
        while (*(char *)((int)lpMem + local_18) != '\0') {
          local_18 = local_18 + 1;
          if (uVar3 == local_18) goto LAB_1010ca73;
        }
LAB_1010cb7b:
        local_24 = uVar6;
        local_20 = lpMem;
        FUN_10136c40("thread name may not contain interior null bytesC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\std\\src\\thread\\thread.rs"
                     ,0x2f,&local_24,&PTR_FUN_10159018,&DAT_101590d4);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar3 = 0;
      do {
        uVar1 = *(uint *)((int)lpMem + uVar3 + 4);
        if ((~((0x1010100 - uVar1 | uVar1) &
              (0x1010100 - *(uint *)((int)lpMem + uVar3) | *(uint *)((int)lpMem + uVar3))) &
            0x80808080) != 0) break;
        uVar3 = uVar3 + 8;
LAB_1010ca73:
      } while (uVar3 <= local_1c - 8);
      if (local_1c != uVar3) {
        iVar5 = 0;
        do {
          if (*(char *)((int)lpMem + iVar5 + uVar3) == '\0') {
            local_18 = iVar5 + uVar3;
            goto LAB_1010cb7b;
          }
          iVar5 = iVar5 + 1;
        } while (local_1c - uVar3 != iVar5);
      }
    }
    if (uVar6 == local_1c) {
      FUN_10136730(&local_24,uVar6,lpMem,uVar6 + 1);
      lpMem = local_20;
      uVar6 = uVar6 + 1;
      if (local_24 == 1) {
        FUN_101366bc((int)local_20);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    *(undefined1 *)((int)lpMem + local_1c) = 0;
    unaff_ESI = local_1c + 1;
    if (unaff_ESI < uVar6) {
      hHeap = GetProcessHeap();
      if (unaff_ESI == 0) {
        HeapFree(hHeap,0,lpMem);
        lpMem = (LPVOID)0x1;
      }
      else {
        lpMem = HeapReAlloc(hHeap,0,lpMem,unaff_ESI);
        if (lpMem == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
    }
  }
  puVar4 = FUN_10107380(0,0x20);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_1013679e(8,0x20);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *puVar4 = 1;
  puVar4[1] = 1;
  puVar4[4] = lpMem;
  puVar4[5] = unaff_ESI;
  puVar4[2] = param_1;
  puVar4[3] = param_2;
  *(undefined1 *)(puVar4 + 6) = 0;
  return;
}

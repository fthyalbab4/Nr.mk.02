// rea decompile_all
// name: FUN_1011c030
// address: 0x1011c030
// body: available
// range: 0x1011c030-0x1011c310 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011c030(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint dwBufferSize;
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  LPCWSTR pWVar4;
  LPCWSTR pWVar5;
  DWORD DVar6;
  undefined4 *puVar7;
  HANDLE pvVar8;
  int iVar9;
  LPVOID lpMem;
  undefined1 local_51;
  int local_50;
  LPCWSTR local_4c;
  int local_48;
  uint local_44;
  LPCWSTR local_40;
  int local_3c;
  LPCWSTR local_38;
  uint local_34;
  LPCWSTR pWStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;

  FUN_1010c620((undefined8 *)&local_44,param_2,param_3);
  pWVar4 = local_40;
  iVar9 = local_3c;
  if (local_44 == 0xffffffff) {
LAB_1011c10c:
    *param_1 = pWVar4;
    param_1[1] = iVar9;
    return;
  }
  local_34 = local_44;
  iStack_2c = local_3c;
  pWStack_30 = local_40;
  FUN_1010fa40((undefined8 *)&local_50,&local_34,'\x01');
  pWVar4 = local_4c;
  iVar2 = local_50;
  iVar9 = local_48;
  if (local_50 == -1) goto LAB_1011c10c;
  FUN_1010c620((undefined8 *)&local_44,param_4,param_5);
  pWVar5 = local_40;
  if (local_44 != 0xffffffff) {
    local_34 = local_44;
    iStack_2c = local_3c;
    pWStack_30 = local_40;
    FUN_1010fa40((undefined8 *)&local_50,&local_34,'\x01');
    pWVar5 = local_4c;
    local_3c = local_48;
    if (local_50 != -1) {
      local_38 = local_4c;
      BVar3 = MoveFileExW(pWVar4,local_4c,1);
      if (BVar3 == 0) {
        DVar6 = GetLastError();
        if (DVar6 == 5) {
          local_1c = 0;
          local_18 = 0;
          local_24 = 7;
          local_20 = 0;
          local_14 = 0;
          local_34 = 1;
          pWStack_30 = (LPCWSTR)0x10000;
          iStack_2c = 0x2200000;
          uStack_28 = 0;
          FUN_1010ff70((char *)&local_44,pWVar4,(int *)&local_34);
          if ((local_44 & 0xff) == 3) {
            puVar7 = *(undefined4 **)(local_40 + 2);
            lpMem = *(LPVOID *)local_40;
            if ((code *)*puVar7 != (code *)0x0) {
              (*(code *)*puVar7)(lpMem);
            }
            if (puVar7[1] != 0) {
              if (8 < (uint)puVar7[2]) {
                lpMem = *(LPVOID *)((int)lpMem + -4);
              }
              pvVar8 = GetProcessHeap();
              HeapFree(pvVar8,0,lpMem);
            }
            pvVar8 = GetProcessHeap();
            HeapFree(pvVar8,0,local_40);
          }
          else if ((local_44 & 0xff) == 0xff) {
            dwBufferSize = local_48 * 2 + 0xc;
            if (0x7ffffffc < dwBufferSize) {
              FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_51,
                           &DAT_10157e44,&PTR_s_C__Users_runneradmin__rustup_too_1015854c);
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            puVar7 = FUN_10107380(0,dwBufferSize);
            if (puVar7 == (undefined4 *)0x0) {
              *(undefined2 *)param_1 = 0x2601;
            }
            else {
              *puVar7 = 3;
              puVar7[1] = 0;
              puVar7[2] = local_48 * 2 + -2;
              memcpy(puVar7 + 3,local_38,local_48 * 2);
              BVar3 = SetFileInformationByHandle(local_40,0x16,puVar7,dwBufferSize);
              pvVar8 = GetProcessHeap();
              HeapFree(pvVar8,0,puVar7);
              if (BVar3 != 0) {
                CloseHandle(local_40);
                goto LAB_1011c0fc;
              }
              DVar6 = GetLastError();
              *(undefined1 *)param_1 = 0;
              if (DVar6 == 0x91) {
                param_1[1] = 0x91;
              }
              else {
                param_1[1] = 5;
              }
            }
            CloseHandle(local_40);
            goto LAB_1011c2b4;
          }
          *(undefined1 *)param_1 = 0;
          param_1[1] = 5;
        }
        else {
          *(undefined1 *)param_1 = 0;
          param_1[1] = DVar6;
        }
      }
      else {
LAB_1011c0fc:
        *(undefined1 *)param_1 = 0xff;
      }
LAB_1011c2b4:
      if (local_50 != 0) {
        pvVar8 = GetProcessHeap();
        HeapFree(pvVar8,0,local_38);
      }
      goto LAB_1011c2cf;
    }
  }
  *param_1 = pWVar5;
  param_1[1] = local_3c;
LAB_1011c2cf:
  if (iVar2 == 0) {
    return;
  }
  pvVar8 = GetProcessHeap();
  HeapFree(pvVar8,0,pWVar4);
  return;
}

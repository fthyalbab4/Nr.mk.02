// rea decompile_all
// name: FUN_1011be70
// address: 0x1011be70
// body: available
// range: 0x1011be70-0x1011c005 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011be70(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  BOOL BVar3;
  LPCWSTR pWVar4;
  DWORD DVar5;
  HANDLE pvVar6;
  LPVOID lpMem;
  uint local_54;
  LPCWSTR local_50;
  undefined4 local_4c;
  LPVOID local_48;
  DWORD local_44;
  int local_40;
  LPCWSTR local_3c;
  undefined4 local_38;
  uint local_34;
  LPCWSTR pWStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;

  FUN_1010c620((undefined8 *)&local_54,param_2,param_3);
  pWVar4 = local_50;
  if (local_54 != 0xffffffff) {
    local_34 = local_54;
    uStack_2c = local_4c;
    pWStack_30 = local_50;
    FUN_1010fa40((undefined8 *)&local_40,&local_34,'\x01');
    iVar2 = local_40;
    pWVar4 = local_3c;
    local_4c = local_38;
    if (local_40 != -1) {
      BVar3 = DeleteFileW(local_3c);
      if (BVar3 == 0) {
        DVar5 = GetLastError();
        if (DVar5 == 5) {
          local_1c = 0;
          local_18 = 0;
          local_24 = 7;
          local_20 = 0;
          local_14 = 0;
          local_34 = 1;
          pWStack_30 = (LPCWSTR)0x10000;
          uStack_2c = 0x200000;
          uStack_28 = 0;
          local_44 = DVar5;
          FUN_1010ff70((char *)&local_54,local_3c,(int *)&local_34);
          if ((local_54 & 0xff) == 3) {
            puVar1 = *(undefined4 **)(local_50 + 2);
            lpMem = *(LPVOID *)local_50;
            if ((code *)*puVar1 != (code *)0x0) {
              local_48 = lpMem;
              (*(code *)*puVar1)(lpMem);
              lpMem = local_48;
            }
            if (puVar1[1] != 0) {
              if (8 < (uint)puVar1[2]) {
                lpMem = *(LPVOID *)((int)lpMem + -4);
              }
              pvVar6 = GetProcessHeap();
              HeapFree(pvVar6,0,lpMem);
            }
            pvVar6 = GetProcessHeap();
            HeapFree(pvVar6,0,local_50);
            DVar5 = local_44;
          }
          else {
            DVar5 = local_44;
            if ((local_54 & 0xff) == 0xff) {
              local_40 = 0x13;
              BVar3 = SetFileInformationByHandle(local_50,0x15,&local_40,4);
              if (BVar3 != 0) {
                *(undefined1 *)param_1 = 0xff;
                CloseHandle(local_50);
                goto LAB_1011bfe8;
              }
              GetLastError();
              CloseHandle(local_50);
              DVar5 = local_44;
            }
          }
        }
        *(undefined1 *)param_1 = 0;
        param_1[1] = DVar5;
      }
      else {
        *(undefined1 *)param_1 = 0xff;
      }
LAB_1011bfe8:
      if (iVar2 == 0) {
        return;
      }
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,local_3c);
      return;
    }
  }
  *param_1 = pWVar4;
  param_1[1] = local_4c;
  return;
}

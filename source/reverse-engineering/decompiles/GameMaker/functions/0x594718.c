// rea decompile_all
// name: FUN_00594718
// address: 0x594718
// body: available
// range: 0x594718-0x594835 inclusive
// range: 0x594850-0x594909 inclusive
// range: 0x59493a-0x594ac1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00594718(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  float local_14;
  uint local_10;
  int local_c;
  int *local_8;

  local_8 = param_2;
  FUN_00409ce0(param_4,&DAT_0058fc50);
  cVar2 = FUN_005941c4(param_1,param_3,&local_c);
  if ((cVar2 != '\0') && (*(int *)(*(int *)(param_1 + 200) + 4 + local_c * 0xc) != 0)) {
    FUN_00409be0(param_4,&DAT_0058fc50,1,
                 *(undefined4 *)(*(int *)(param_1 + 200) + 4 + local_c * 0xc));
    local_14 = (float)((uint)(byte)(&DAT_0077c75c)
                                   [*(ushort *)(*(int *)(param_1 + 200) + 2 + local_c * 0xc)] *
                      *(int *)(*(int *)(param_1 + 200) + 4 + local_c * 0xc));
    if (4.0 < local_14) {
      FUN_0043f254(local_8,0,local_c * 3,
                   *(int *)(*(int *)(param_1 + 200) + 8 + local_c * 0xc) + *(int *)(param_1 + 0xac),
                   0);
      iVar4 = FUN_00409a20(*param_4);
      if (-1 < iVar4) {
        iVar4 = iVar4 + 1;
        local_18 = 0;
        do {
          uVar1 = *(ushort *)(*(int *)(param_1 + 200) + 2 + local_c * 0xc);
          switch(uVar1) {
          case 1:
            (**(code **)(*local_8 + 0xc))(local_8,&local_10,(&DAT_0077c75c)[uVar1]);
            local_14 = (float)(local_10 & 0xff);
            break;
          case 3:
          case 8:
            (**(code **)(*local_8 + 0xc))(local_8,&local_10,(&DAT_0077c75c)[uVar1]);
            if ((*(byte *)(param_1 + 0x48) & 2) == 0) {
              local_14 = (float)(local_10 & 0xffff);
            }
            else {
              local_14 = (float)CONCAT11((char)local_10,(char)(local_10 >> 8));
            }
            break;
          case 4:
          case 9:
            (**(code **)(*local_8 + 0xc))(local_8,&local_10,(&DAT_0077c75c)[uVar1]);
            if ((*(byte *)(param_1 + 0x48) & 2) != 0) {
              uVar3 = FUN_00592f20(local_10);
              local_14 = (float)uVar3;
            }
            break;
          case 5:
          case 10:
            FUN_0043f488(local_8,&local_24,4);
            FUN_0043f488(local_8,&local_28,4);
            if ((*(byte *)(param_1 + 0x48) & 2) != 0) {
              local_24 = FUN_00592f20(local_24);
              local_28 = FUN_00592f20(local_28);
            }
            local_14 = (float)((float10)local_24 / (float10)local_28);
            break;
          case 0xb:
            FUN_0043f488(local_8,&local_1c,4);
            FUN_0043f488(local_8,&local_20,4);
            if ((*(byte *)(param_1 + 0x48) & 2) != 0) {
              local_1c = FUN_00592f20(local_1c);
              local_20 = FUN_00592f20(local_20);
            }
            local_14 = (float)((float10)local_1c / (float10)local_20);
          }
          *(float *)(*param_4 + local_18 * 4) = local_14;
          local_18 = local_18 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else {
      cVar2 = (&DAT_0077c75c)[*(ushort *)(*(int *)(param_1 + 200) + 2 + local_c * 0xc)];
      local_10 = *(uint *)(*(int *)(param_1 + 200) + 8 + local_c * 0xc);
      iVar4 = *(int *)(*(int *)(param_1 + 200) + 4 + local_c * 0xc);
      if (-1 < iVar4 + -1) {
        local_18 = 0;
        do {
          switch(*(undefined2 *)(*(int *)(param_1 + 200) + 2 + local_c * 0xc)) {
          case 1:
          case 2:
          case 6:
          case 7:
            *(float *)(*param_4 + local_18 * 4) = (float)(local_10 & 0xff);
            break;
          case 3:
          case 8:
            *(float *)(*param_4 + local_18 * 4) = (float)(local_10 & 0xffff);
            break;
          case 4:
          case 9:
            *(float *)(*param_4 + local_18 * 4) = (float)local_10;
          }
          local_10 = local_10 >> (cVar2 * '\b' & 0x1fU);
          local_18 = local_18 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  return;
}

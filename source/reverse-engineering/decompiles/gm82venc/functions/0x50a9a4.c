// rea decompile_all
// name: FUN_0050a9a4
// address: 0x50a9a4
// body: available
// range: 0x50a9a4-0x50abdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050a9a4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_c;

  local_c = 0;
  if (*(int *)(param_1 + 0x7c) < 1) {
    uVar2 = param_3 + 5;
    uVar3 = uVar2;
  }
  else {
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      FUN_0050b12c(param_1);
    }
    FUN_00509924(param_1,param_1 + 0xb10);
    FUN_00509924(param_1,param_1 + 0xb1c);
    local_c = FUN_0050a2c0(param_1);
    uVar2 = *(int *)(param_1 + 0x16a0) + 10U >> 3;
    uVar3 = *(int *)(param_1 + 0x16a4) + 10U >> 3;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
  }
  if ((uVar2 < param_3 + 4U) || (param_2 == 0)) {
    if (uVar2 == uVar3) {
      if (*(int *)(param_1 + 0x16b4) < 0xe) {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) |
             (short)param_4 + 2 << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
        *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + 3;
      }
      else {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) |
             (short)(param_4 + 2U) << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
        iVar1 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b0);
        iVar1 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar1) =
             (char)((ushort)*(undefined2 *)(param_1 + 0x16b0) >> 8);
        *(short *)(param_1 + 0x16b0) =
             (short)((int)(param_4 + 2U & 0xffff) >>
                    (0x10U - (char)*(undefined4 *)(param_1 + 0x16b4) & 0x1f));
        *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0xd;
      }
      FUN_0050ac6c(param_1,&DAT_00683618,&DAT_00683a98);
    }
    else {
      if (*(int *)(param_1 + 0x16b4) < 0xe) {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) |
             (short)param_4 + 4 << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
        *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + 3;
      }
      else {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) |
             (short)(param_4 + 4U) << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
        iVar1 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b0);
        iVar1 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar1) =
             (char)((ushort)*(undefined2 *)(param_1 + 0x16b0) >> 8);
        *(short *)(param_1 + 0x16b0) =
             (short)((int)(param_4 + 4U & 0xffff) >>
                    (0x10U - (char)*(undefined4 *)(param_1 + 0x16b4) & 0x1f));
        *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0xd;
      }
      FUN_0050a324(param_1,*(int *)(param_1 + 0xb14) + 1,*(int *)(param_1 + 0xb20) + 1,local_c + 1);
      FUN_0050ac6c(param_1,param_1 + 0x8c,param_1 + 0x980);
    }
  }
  else {
    FUN_0050a61c(param_1,param_2,param_3,param_4);
  }
  FUN_00509554(param_1);
  if (param_4 != 0) {
    FUN_0050b230(param_1);
  }
  return;
}

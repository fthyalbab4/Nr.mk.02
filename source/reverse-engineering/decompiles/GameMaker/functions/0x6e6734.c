// rea decompile_all
// name: FUN_006e6734
// address: 0x6e6734
// body: available
// range: 0x6e6734-0x6e67f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006e6734(int param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  int extraout_ECX;
  char extraout_DL;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00409ce0(param_1 + 8,&DAT_006e5644);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_006e6898(param_1);
  uVar1 = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  FUN_00409be0(param_1 + 8,&DAT_006e5644,1,uVar1);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0xc);
  iVar4 = *(int *)(param_1 + 4);
  if (-1 < iVar4 + -1) {
    iVar3 = 0;
    do {
      uVar1 = FUN_005b2ef4(param_3,iVar3);
      uVar1 = FUN_00701cf4(&DAT_00700d94,1,uVar1);
      *(undefined4 *)(*(int *)(param_1 + 8) + iVar3 * 4) = uVar1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_28;
  }
  return param_1;
}

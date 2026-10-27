// rea decompile_all
// name: FUN_0054a7d4
// address: 0x54a7d4
// body: available
// range: 0x54a7d4-0x54a8b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0054a7d4(int param_1,char param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  char extraout_DL;
  char cVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  int local_10;

  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  FUN_00405a4c(param_1,0);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
  *(int *)(param_1 + 0xc) = param_3;
  uVar3 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  uVar3 = FUN_0040431c(*(int *)(param_1 + 8) << 4);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar3 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  FUN_0043b2ec(uVar3,*(undefined4 *)(param_1 + 8));
  local_10 = *(int *)(param_1 + 8);
  if (-1 < local_10 + -1) {
    iVar5 = 0;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + iVar5 * 0x10);
      FUN_0043ae88(*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 4) + iVar5 * 0x10);
      puVar1[1] = iVar5;
      *puVar1 = 0;
      puVar1[3] = 0;
      iVar2 = *(int *)(param_3 + 4);
      *(undefined2 *)(puVar1 + 3) = *(undefined2 *)(iVar2 + iVar5 * 3);
      *(undefined1 *)((int)puVar1 + 0xe) = *(undefined1 *)(iVar2 + 2 + iVar5 * 3);
      puVar1[2] = 0x100;
      iVar5 = iVar5 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  if (cVar4 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_2c;
  }
  return param_1;
}

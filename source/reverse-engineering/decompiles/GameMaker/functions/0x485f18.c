// rea decompile_all
// name: FUN_00485f18
// address: 0x485f18
// body: available
// range: 0x485f18-0x485f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00485f18(undefined4 param_1,char param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *extraout_ECX;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar5;
  undefined4 uStack_38;
  undefined1 local_1c [16];
  tagPOINT local_c;

  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  FUN_004eb7c4(param_1,0,param_3);
  cVar1 = (**(code **)(*param_3 + 0x60))();
  if (cVar1 == '\0') {
    GetCursorPos(&local_c);
    uVar2 = FUN_004ee62c(param_3);
    puVar5 = local_1c;
    uVar3 = FUN_004ee640(param_3);
    FUN_0040c280(local_c.x + -10,local_c.y + -10,uVar3,puVar5,uVar2);
    FUN_004ef7bc(param_3,local_1c);
  }
  if (cVar4 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_38;
  }
  return param_1;
}

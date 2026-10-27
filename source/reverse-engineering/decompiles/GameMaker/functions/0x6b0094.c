// rea decompile_all
// name: FUN_006b0094
// address: 0x6b0094
// body: available
// range: 0x6b0094-0x6b0155 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b00b1 (push 0x6b0156 followed by fs-segment stack chaining); handler 0x6b0156 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b0094(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;

  puStack_10 = (undefined1 *)0x6b00a6;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_14 = &LAB_006b0156;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar3 = local_8;
  puStack_10 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_10 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_10 = &stack0xfffffffc;
    iVar3 = FUN_00407048(&local_8,local_8);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  if (iVar4 < param_2) {
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      FUN_00407048(&local_8,local_8);
    }
LAB_006b0140:
    puVar1 = puStack_10;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = &LAB_006b015d;
    puStack_14 = (undefined1 *)0x6b0155;
    thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
    return;
  }
  for (; 0 < param_2; param_2 = param_2 + -1) {
    iVar3 = FUN_00407058(&local_8);
    cVar2 = FUN_006aff6c(*(undefined2 *)(iVar3 + -2 + param_2 * 2));
    if (cVar2 != '\0') break;
  }
  do {
    if (param_2 < 1) goto LAB_006b0140;
    iVar3 = FUN_00407058(&local_8);
    cVar2 = FUN_006aff6c(*(undefined2 *)(iVar3 + -2 + param_2 * 2));
    if (cVar2 == '\0') goto LAB_006b0140;
    param_2 = param_2 + -1;
  } while( true );
}

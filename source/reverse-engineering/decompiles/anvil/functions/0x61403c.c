// rea decompile_all
// name: FUN_0061403c
// address: 0x61403c
// body: available
// range: 0x61403c-0x6140fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x614068 (push 0x6140fe followed by fs-segment stack chaining); handler 0x6140fe lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061403c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined1 local_3c [56];

  puStack_50 = (undefined1 *)0x61405d;
  FUN_00408ff8(local_3c,&DAT_00615fdc);
  puStack_54 = &LAB_006140fe;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  puStack_50 = &stack0xfffffffc;
  FUN_006164fc(param_4,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + param_3 * 0x28));
  iVar2 = FUN_00613e3c(param_1,param_2,param_3,param_4);
  if (*PTR_PTR_00688e10 == '\0') {
    while (*(int *)(*(int *)(param_2 + 4) + iVar2 * 0x28) == 0x70) {
      FUN_00409360(local_3c,param_4,&DAT_00615fdc);
      iVar2 = FUN_00613b50(param_1,param_2,iVar2 + 1,param_4);
      if (*PTR_PTR_00688e10 != '\0') break;
      FUN_00409360(**(undefined4 **)(param_4 + 0x2c),local_3c,&DAT_00615fdc);
    }
  }
  puVar1 = puStack_50;
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_00614105;
  puStack_54 = (undefined1 *)0x6140fd;
  FUN_004090d0(local_3c,&DAT_00615fdc,puVar1);
  return;
}

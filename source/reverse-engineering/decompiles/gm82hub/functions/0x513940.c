// rea decompile_all
// name: FUN_00513940
// address: 0x513940
// body: available
// range: 0x513940-0x513a02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x513959 (push 0x513a03 followed by fs-segment stack chaining); handler 0x513a03 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00513940(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_00513a03;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_005138d4(param_1);
  iVar4 = FUN_0050bbe0(param_2);
  if (iVar4 == 800) {
    uVar5 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 4) = uVar5;
    FUN_0050bc1c(param_2,&local_8);
    FUN_00408194(param_1 + 8,local_8);
    FUN_0050bc1c(param_2,&local_c);
    FUN_00408194(param_1 + 0xc,local_c);
    cVar2 = FUN_0050bcd0(param_2);
    if (cVar2 != '\0') {
      uVar5 = FUN_0050be14(param_2);
      *(undefined4 *)(param_1 + 0x10) = uVar5;
    }
    uVar5 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x18) = uVar5;
    FUN_0050bbf4(param_2);
    *(double *)(param_1 + 0x20) = (double)in_ST0;
    FUN_0050bbf4(param_2);
    *(double *)(param_1 + 0x28) = (double)in_ST1;
    uVar3 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0x14) = uVar3;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00513a0a;
  puStack_20 = (undefined1 *)0x513a02;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}

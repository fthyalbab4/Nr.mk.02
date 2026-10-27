// rea decompile_all
// name: FUN_0065c414
// address: 0x65c414
// body: available
// range: 0x65c414-0x65c4cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65c444 (push 0x65c4ce followed by fs-segment stack chaining); handler 0x65c4ce lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065c414(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c [6];

  puVar5 = local_1c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  puStack_2c = (undefined1 *)0x65c439;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_30 = &LAB_0065c4ce;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  iVar3 = *(int *)(param_1 + 4);
  puStack_2c = &stack0xfffffffc;
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    puStack_2c = &stack0xfffffffc;
    do {
      iVar2 = FUN_0065a204(*(int *)(param_1 + 8) + iVar4 * 0x18,local_1c);
      if (iVar2 == 0) {
        FUN_00409360(*(int *)(param_1 + 8) + iVar4 * 0x18,
                     *(int *)(param_1 + 8) + -0x18 + *(int *)(param_1 + 4) * 0x18,&DAT_00615f70);
        FUN_00409360(*(int *)(param_1 + 0xc) + iVar4 * 0x18,
                     *(int *)(param_1 + 0xc) + -0x18 + *(int *)(param_1 + 4) * 0x18,&DAT_00615f70);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0065c4d5;
  puStack_30 = (undefined1 *)0x65c4cd;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}

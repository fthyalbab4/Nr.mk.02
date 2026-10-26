// rea decompile_all
// name: FUN_0065a308
// address: 0x65a308
// body: available
// range: 0x65a308-0x65a3d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65a33a (push 0x65a3d3 followed by fs-segment stack chaining); handler 0x65a3d3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065a308(int param_1,int *param_2,int *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_1c [4];
  undefined4 local_c;

  piVar3 = local_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *param_3;
    param_3 = param_3 + 1;
    piVar3 = piVar3 + 1;
  }
  puStack_2c = (undefined1 *)0x65a32f;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_30 = &LAB_0065a3d3;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  if (param_1 == 2) {
    if ((*param_2 == 0) && (local_1c[0] == 0)) {
      *(double *)(param_2 + 2) =
           *(double *)(param_2 + 2) + (double)CONCAT44(local_1c[3],local_1c[2]);
      puStack_2c = &stack0xfffffffc;
    }
    else if ((*param_2 == 1) && (local_1c[0] == 1)) {
      puStack_2c = &stack0xfffffffc;
      FUN_004076c4(param_2 + 4,local_c);
    }
    else {
      param_1 = 1;
      puStack_2c = &stack0xfffffffc;
    }
  }
  if (((param_1 == 3) && (*param_2 == 0)) && (local_1c[0] == 0)) {
    *(double *)(param_2 + 2) = *(double *)(param_2 + 2) * (double)CONCAT44(local_1c[3],local_1c[2]);
  }
  if (param_1 == 1) {
    if (local_1c[0] == 0) {
      param_2[2] = local_1c[2];
      param_2[3] = local_1c[3];
    }
    else {
      FUN_0040732c(param_2 + 4,local_c);
    }
    *param_2 = local_1c[0];
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0065a3da;
  puStack_30 = (undefined1 *)0x65a3d2;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}

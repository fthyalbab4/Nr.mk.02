// rea decompile_all
// name: FUN_00586914
// address: 0x586914
// body: available
// range: 0x586914-0x586b24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x586940 (push 0x586b25 followed by fs-segment stack chaining); handler 0x586b25 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00586aa2) */
/* WARNING: Removing unreachable block (ram,0x005869f2) */

void FUN_00586914(int param_1,int param_2,undefined4 *param_3,int *param_4,undefined4 *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  int local_1c [6];

  puStack_38 = (undefined1 *)0x586935;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_3c = &LAB_00586b25;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  iVar2 = FUN_00586fa0(param_1,**(undefined4 **)(param_2 + 0x2c),local_1c);
  if (iVar2 != 0) goto LAB_00586b09;
  if (local_1c[0] != 0) {
    FUN_00610d7c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(**(int **)(param_2 + 0x2c) + 0x30),
                 L"Wrong type of variable index");
    goto LAB_00586b09;
  }
  uVar3 = FUN_004048b8();
  *param_3 = uVar3;
  *param_5 = *(undefined4 *)(param_2 + 4);
  *param_4 = 0;
  if (1 < *(int *)(param_2 + 0x28)) {
    iVar2 = FUN_00586fa0(param_1,**(int **)(param_2 + 0x2c) + 0x38,local_1c);
    if (iVar2 != 0) goto LAB_00586b09;
    if (local_1c[0] != 0) {
      FUN_00610d7c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(**(int **)(param_2 + 0x2c) + 0x68)
                   ,L"Wrong type of array index");
      goto LAB_00586b09;
    }
    FUN_004048b8();
    if ((extraout_EDX != 0) && (extraout_EDX < 0)) {
      FUN_00610d7c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(**(int **)(param_2 + 0x2c) + 0x68)
                   ,&PTR_DAT_00586bcc);
      goto LAB_00586b09;
    }
    uVar4 = FUN_004048b8();
    if (extraout_EDX_00 == 0) {
      if (uVar4 < 32000) {
LAB_00586a42:
        iVar2 = FUN_004048b8();
        *param_4 = iVar2;
        goto LAB_00586a4c;
      }
    }
    else if (extraout_EDX_00 < 0) goto LAB_00586a42;
    FUN_00610d7c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(**(int **)(param_2 + 0x2c) + 0x68),
                 L"Array index >= 32000");
    goto LAB_00586b09;
  }
LAB_00586a4c:
  if ((*(int *)(param_2 + 0x28) < 3) ||
     (iVar2 = FUN_00586fa0(param_1,**(int **)(param_2 + 0x2c) + 0x70,local_1c), iVar2 != 0))
  goto LAB_00586b09;
  if (local_1c[0] != 0) {
    FUN_00610d7c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(**(int **)(param_2 + 0x2c) + 0xa0),
                 L"Wrong type of array index");
    goto LAB_00586b09;
  }
  FUN_004048b8();
  if ((extraout_EDX_01 != 0) && (extraout_EDX_01 < 0)) {
    FUN_00610d7c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(**(int **)(param_2 + 0x2c) + 0xa0),
                 &PTR_DAT_00586bcc);
    goto LAB_00586b09;
  }
  uVar4 = FUN_004048b8();
  if (extraout_EDX_02 == 0) {
    if (uVar4 < 32000) {
LAB_00586af2:
      iVar2 = FUN_004048b8();
      *param_4 = iVar2 + *param_4 * 32000;
      goto LAB_00586b09;
    }
  }
  else if (extraout_EDX_02 < 0) goto LAB_00586af2;
  FUN_00610d7c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(**(int **)(param_2 + 0x2c) + 0xa0),
               L"Array index >= 32000");
LAB_00586b09:
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_00586b2c;
  puStack_3c = (undefined1 *)0x586b24;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}

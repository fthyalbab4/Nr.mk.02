// rea decompile_all
// name: FUN_005439b8
// address: 0x5439b8
// body: available
// range: 0x5439b8-0x543b4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x543adf (push 0x543b4b followed by fs-segment stack chaining); handler 0x543b4b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005439b8(int *param_1,int param_2,undefined1 param_3,int param_4,int param_5,
                 undefined1 param_6,int param_7,int param_8)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  param_1[4] = param_4;
  param_1[6] = param_2;
  *(undefined1 *)(param_1 + 5) = param_3;
  param_1[7] = param_8;
  param_1[8] = param_7;
  *(undefined1 *)(param_1 + 9) = param_6;
  param_1[10] = param_5;
  if (*(byte *)(param_1 + 5) < 2) {
    *(undefined1 *)(param_1 + 5) = 2;
  }
  param_1[0x10] = *(byte *)(param_1 + 5) + 1;
  puStack_14 = (undefined1 *)0x543a31;
  (**(code **)(*(int *)param_1[6] + 0x10))((int *)param_1[6],param_1 + 5,1);
  param_1[0xf] = param_1[0x10];
  puStack_14 = (undefined1 *)0x543a47;
  uVar2 = FUN_00543890(param_1,param_1[0x10]);
  *(undefined2 *)(param_1 + 0x11) = uVar2;
  sVar3 = 1 << ((char)param_1[0x10] - 1U & 0x1f);
  *(short *)((int)param_1 + 0x46) = sVar3;
  *(short *)(param_1 + 0x12) = sVar3 + 1;
  *(short *)((int)param_1 + 0x4a) = sVar3 + 2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if ((char)param_1[9] == '\0') {
    param_1[0x14] = param_1[7] * param_1[8];
  }
  else {
    param_1[0x14] = param_1[7];
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  puStack_14 = (undefined1 *)0x543acc;
  iVar4 = FUN_00543410(&PTR_LAB_005432a0,1,param_2);
  param_1[0xb] = iVar4;
  puStack_18 = &LAB_00543b4b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(int *)(iVar4 + 8) = param_1[2];
  *(int *)(iVar4 + 0xc) = param_1[3];
  if (((param_1[10] == 0) || (param_1[8] < 1)) || (param_1[7] < 1)) {
    puStack_14 = &stack0xfffffffc;
    (**(code **)*param_1)(param_1,(int)(short)param_1[0x12]);
  }
  else {
    puStack_14 = &stack0xfffffffc;
    (**(code **)(*param_1 + 8))();
    (**(code **)*param_1)(param_1,(int)(short)param_1[0x12]);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00543b52;
  puStack_18 = (undefined1 *)0x543b4a;
  FUN_00405a7c(param_1[0xb],uStack_1c,puVar1);
  return;
}

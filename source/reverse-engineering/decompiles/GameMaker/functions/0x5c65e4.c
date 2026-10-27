// rea decompile_all
// name: FUN_005c65e4
// address: 0x5c65e4
// body: available
// range: 0x5c65e4-0x5c6737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c6608 (push 0x5c6738 followed by fs-segment stack chaining); handler 0x5c6738 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c65e4(int *param_1,undefined4 param_2,int *param_3,short *param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  puStack_30 = &LAB_005c6738;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_3;
  FUN_005c7994(param_1,param_2,param_3,&local_8);
  uVar2 = FUN_0042c1e8(param_4);
  cVar1 = (&DAT_0077d680)[uVar2 & 0x7f];
  (**(code **)(*param_1 + 0x10))(param_1,cVar1,1);
  if (cVar1 == '\x03') {
    if (DAT_0077d678 == '\0') {
      bVar3 = false;
    }
    else {
      bVar3 = *param_4 == 0xb;
    }
    if (bVar3) {
      uVar2 = FUN_00426d24(param_4);
      piVar7 = (int *)(&PTR_u_false_0077d684)[uVar2 & 0x7f];
      piVar5 = local_c;
      piVar6 = local_8;
      FUN_005c8524(param_1,&local_10);
      piVar4 = local_10;
      (**(code **)(*local_10 + 0x8c))();
      FUN_0040b250();
    }
    else {
      FUN_00429418(&local_14,param_4);
      piVar5 = local_c;
      piVar6 = local_8;
      piVar7 = local_14;
      FUN_005c8524(param_1,&local_18);
      piVar4 = local_18;
      (**(code **)(*local_18 + 0x8c))();
      FUN_0040b250();
    }
  }
  else {
    piVar6 = local_c;
    piVar7 = local_8;
    FUN_005c8524(param_1,&local_1c);
    piVar4 = (int *)0x5c66e6;
    piVar5 = local_1c;
    (**(code **)(*local_1c + 0x90))();
    FUN_0040b250();
  }
  (**(code **)(*param_1 + 0x14))(param_1,0,*param_1,piVar4,piVar5,piVar6,piVar7);
  (**(code **)(*param_1 + 0x10))(param_1,cVar1,0);
  *in_FS_OFFSET = piVar4;
  FUN_00408e44(&local_1c,&LAB_005c0048,2,&LAB_005c673f);
  thunk_FUN_00406e5c(&local_14);
  FUN_0040b140(&local_10);
  thunk_FUN_00406e5c(&local_8);
  return;
}

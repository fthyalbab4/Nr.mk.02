// rea decompile_all
// name: FUN_00545684
// address: 0x545684
// body: available
// range: 0x545684-0x5457da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5456ae (push 0x5457db followed by fs-segment stack chaining); handler 0x5457db lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00545684(int *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  bool bVar1;
  undefined1 *puVar2;
  short sVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  char local_d;
  int local_c;
  int local_8;

  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  puStack_30 = &LAB_005457db;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_3;
  local_8 = param_2;
  sVar3 = FUN_005449dc(param_1,3);
  if ((sVar3 == *(short *)((int)param_1 + 0x29)) && (param_4 == *(ushort *)((int)param_1 + 0x2b))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  *(undefined2 *)((int)param_1 + 0x25) = (undefined2)local_8;
  *(undefined2 *)((int)param_1 + 0x27) = (undefined2)local_c;
  *(undefined2 *)((int)param_1 + 0x29) = (undefined2)param_5;
  *(short *)((int)param_1 + 0x2b) = (short)param_4;
  if (bVar1) {
    FUN_00544980(param_1);
    FUN_00544998(param_1);
    FUN_00544924(param_1);
    FUN_005448cc(param_1);
  }
  local_d = '\0';
  iVar4 = (**(code **)(*(int *)param_1[1] + 0x30))();
  if (iVar4 < local_8 + param_5) {
    iVar4 = (**(code **)(*(int *)param_1[1] + 0x30))();
    if (0 < iVar4) {
      local_d = '\x01';
      FUN_0040b75c(&PTR_DAT_0053b3b8,&local_14);
      (**(code **)(*param_1 + 0x10))(param_1,1,local_14);
    }
    (**(code **)(*(int *)param_1[1] + 0x44))((int *)param_1[1],local_8 + param_5);
  }
  iVar4 = (**(code **)(*(int *)param_1[1] + 0x24))();
  if (iVar4 < (int)(local_c + param_4)) {
    iVar4 = (**(code **)(*(int *)param_1[1] + 0x24))();
    if (0 < iVar4) {
      local_d = '\x01';
      FUN_0040b75c(&PTR_DAT_0053b3b0,&local_18);
      (**(code **)(*param_1 + 0x10))(param_1,1,local_18);
    }
    (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],local_c + param_4);
  }
  if (local_d != '\0') {
    FUN_0040b75c(&PTR_DAT_0053b3c8,&local_1c);
    (**(code **)(*param_1 + 0x10))(param_1,1,local_1c);
  }
  puVar2 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005457e2;
  puStack_30 = (undefined1 *)0x5457da;
  thunk_FUN_00406e80(&local_1c,3,puVar2);
  return;
}

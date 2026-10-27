// rea decompile_all
// name: FUN_005c6394
// address: 0x5c6394
// body: available
// range: 0x5c6394-0x5c65d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c63bc (push 0x5c65d6 followed by fs-segment stack chaining); handler 0x5c65d6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c6394(int *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  int *piStack_50;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  undefined1 *local_24;
  int *local_20;
  int *local_8;

  local_20 = (int *)&stack0xfffffffc;
  local_8 = (int *)&DAT_00000008;
  do {
    local_8 = (int *)((int)local_8 + -1);
  } while (local_8 != (int *)0x0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_005c65d6;
  local_28 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = (int *)0x5c63c6;
  uVar3 = FUN_0042c1e8(0);
  cVar1 = (&DAT_0077d680)[uVar3 & 0x7f];
  if ((DAT_0077d678 == '\0') || (cVar1 != '\x03')) {
    bVar4 = false;
  }
  else {
    bVar4 = _ImgDelayDescr_Module_Handle_00000000 == 0xb;
  }
  if (bVar4) {
    local_2c = (int *)0x5c63f4;
    uVar3 = FUN_00426d24(0);
    local_2c = (int *)0x5c6406;
    FUN_00429fc8(&stack0xffffffe4,(&PTR_u_false_0077d684)[uVar3 & 0x7f]);
  }
  else {
    local_2c = (int *)0x5c6412;
    FUN_00424d3c(&stack0xffffffe4,0);
  }
  local_2c = (int *)0x5c641d;
  (**(code **)(*param_1 + 0x10))(param_1,cVar1,1);
  local_2c = (int *)0x5c6424;
  cVar2 = FUN_005c85a0(param_1);
  if (cVar2 != '\x01') {
    local_2c = (int *)0x5c6434;
    local_2c = (int *)FUN_0040b140(&local_24);
    local_30 = (int *)param_1[8];
    local_34 = (int *)0x5c643e;
    (**(code **)(*local_30 + 0x34))();
    local_2c = (int *)0x5c6443;
    FUN_0040b250();
    if (local_24 != (undefined1 *)0x0) {
      if (cVar1 == '\x03') {
        local_2c = (int *)0x5c645a;
        local_2c = (int *)FUN_0040b140(&local_8);
        local_30 = local_20;
        local_34 = (int *)0x5c646a;
        FUN_005cae4c(param_1[7],&local_28);
        local_34 = local_28;
        local_38 = (int *)0x5c6476;
        (**(code **)(*local_28 + 0x90))();
        local_38 = (int *)0x5c647b;
        FUN_0040b250();
        local_38 = (int *)0x5c6486;
        FUN_00429418(&local_2c,&stack0xffffffe4);
        local_38 = local_2c;
        local_3c = local_8;
        local_40 = (int *)0x5c6493;
        (**(code **)(*local_8 + 0x14))();
        local_40 = (int *)0x5c6498;
        FUN_0040b250();
        local_40 = (int *)0x5c64a0;
        local_40 = (int *)FUN_0040b140(&local_30);
        local_44 = local_8;
        local_48 = (int *)0x5c64ad;
        local_48 = (int *)FUN_0040b140(&local_34);
        (**(code **)(*(int *)param_1[8] + 0x34))();
        FUN_0040b250();
        piStack_50 = local_34;
        (**(code **)(*local_34 + 0x18))();
        FUN_0040b250();
      }
      else {
        local_2c = (int *)0x5c64d7;
        local_2c = (int *)FUN_0040b140(&local_38);
        local_30 = local_20;
        local_34 = (int *)0x5c64e4;
        local_34 = (int *)FUN_0040b140(&local_3c);
        local_38 = (int *)param_1[8];
        local_3c = (int *)0x5c64ee;
        (**(code **)(*local_38 + 0x34))();
        local_3c = (int *)0x5c64f3;
        FUN_0040b250();
        local_40 = (int *)0x5c64fc;
        (**(code **)(*local_3c + 0x1c))();
        FUN_0040b250();
      }
      goto LAB_005c6551;
    }
  }
  if (cVar1 == '\x03') {
    local_2c = (int *)0x5c6513;
    FUN_00429418(&local_40,&stack0xffffffe4);
    local_2c = local_40;
    local_30 = local_20;
    local_34 = (int *)0x5c6525;
    FUN_005c8524(param_1,&local_44);
    local_34 = local_44;
    local_38 = (int *)0x5c652e;
    (**(code **)(*local_44 + 0x70))();
    FUN_0040b250();
  }
  else {
    local_2c = local_20;
    local_30 = (int *)0x5c6543;
    FUN_005c8524(param_1,&local_48);
    local_30 = local_48;
    local_34 = (int *)0x5c654c;
    (**(code **)(*local_48 + 0x74))();
    FUN_0040b250();
  }
LAB_005c6551:
  (**(code **)(*param_1 + 0x14))(param_1,0);
  (**(code **)(*param_1 + 0x10))(param_1,cVar1,0);
  *in_FS_OFFSET = piStack_50;
  local_48 = (int *)&LAB_005c65dd;
  FUN_00408e44(&local_48,&LAB_005c0048,2);
  thunk_FUN_00406e5c(&local_40);
  FUN_0040b140(&local_3c);
  FUN_0040b140(&local_38);
  FUN_0040b140(&local_34);
  FUN_0040b140(&local_30);
  thunk_FUN_00406e5c(&local_2c);
  FUN_0040b140(&local_28);
  FUN_0040b140(&local_24);
  FUN_004249e8(&stack0xffffffe4);
  FUN_0040b140(&local_8);
  return;
}

// rea decompile_all
// name: FUN_004bf018
// address: 0x4bf018
// body: available
// range: 0x4bf018-0x4bf17a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bf036 (push 0x4bf17b followed by fs-segment stack chaining); handler 0x4bf17b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bf018(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  int aiStackY_17fc [1515];
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c [4];
  int local_c;
  int local_8;

  bVar7 = 0;
  puStack_40 = &stack0xfffffffc;
  local_30 = 0;
  local_2c = 0;
  puStack_44 = &LAB_004bf17b;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  piVar3 = *(int **)(param_1 + 0x278);
  FUN_0045bda4(piVar3[0x12],1);
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x300) + 8) + 8);
  if (-1 < iVar2 + -1) {
    local_8 = 0;
    local_1c[3] = iVar2;
    do {
      iVar2 = FUN_004b84ac(*(undefined4 *)(param_1 + 0x300),local_8);
      FUN_0045b850(piVar3[0x11],*(undefined4 *)(iVar2 + 0x20));
      FUN_0045b96c(piVar3[0x11],2);
      FUN_004bd9bc(param_1,&local_28);
      iVar6 = -local_28;
      FUN_004bd9bc(param_1,&local_28);
      local_c = -local_24;
      iVar2 = FUN_004b84ac(*(undefined4 *)(param_1 + 0x300),local_8);
      piVar4 = (int *)(iVar2 + 0x10 + (uint)bVar7 * -8);
      local_20 = *(undefined4 *)(iVar2 + 0xc);
      piVar5 = piVar4 + (uint)bVar7 * -2 + 1;
      local_1c[(uint)bVar7 * -2] = *piVar4;
      local_1c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = *piVar5;
      (local_1c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
           piVar5[(uint)bVar7 * -2 + 1];
      FUN_0040c268(&local_20,iVar6,local_c);
      (**(code **)(*piVar3 + 0x74))(piVar3,local_20,local_1c[0],local_1c[2],local_1c[1]);
      piVar4 = (int *)FUN_004b84ac(*(undefined4 *)(param_1 + 0x300),local_8);
      (**(code **)(*piVar4 + 0xc))(piVar4,&local_2c);
      if (local_2c != 0) {
        FUN_0045b96c(piVar3[0x11],0);
        iVar2 = FUN_004b84ac(*(undefined4 *)(param_1 + 0x300),local_8);
        FUN_0045b0d0(piVar3[0x10],*(undefined4 *)(iVar2 + 0x20));
        piVar4 = (int *)FUN_004b84ac(*(undefined4 *)(param_1 + 0x300),local_8);
        (**(code **)(*piVar4 + 0xc))(piVar4,&local_30);
        (**(code **)(*piVar3 + 0x88))(piVar3,local_20,local_1c[2],local_30);
      }
      local_8 = local_8 + 1;
      local_1c[3] = local_1c[3] + -1;
    } while (local_1c[3] != 0);
  }
  puVar1 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_004bf182;
  puStack_44 = (undefined1 *)0x4bf17a;
  thunk_FUN_00406e80(&local_30,2,puVar1);
  return;
}

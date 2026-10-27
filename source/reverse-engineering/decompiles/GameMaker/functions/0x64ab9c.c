// rea decompile_all
// name: FUN_0064ab9c
// address: 0x64ab9c
// body: available
// range: 0x64ab9c-0x64ad2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064ab9c(int param_1,int param_2,ushort param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_14;

  FUN_00644610(*(undefined4 *)PTR_DAT_00781e14);
  FUN_00649a7c();
  uVar1 = *(uint *)(*(int *)(param_1 + 0x34) + 4);
  iVar4 = (int)uVar1 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar1 & 1) != 0);
  }
  FUN_007034e0(*(undefined4 *)(param_1 + 0x38),param_5 - iVar4,param_4 - iVar4,1,
               *(int *)(param_1 + 0x34));
  if (*(int *)(param_1 + 0x48) == 0) {
    if (param_2 == 1) {
      local_14 = *(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x719);
    }
    else {
      local_14 = *(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x715);
    }
    iVar2 = iVar4 * 2 + 1;
    FUN_00703508(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704),param_5 - iVar4,param_4 - iVar4,
                 local_14,iVar2,iVar2,param_4 - iVar4,param_5 - iVar4,
                 *(undefined4 *)(param_1 + 0x38));
  }
  else {
    uVar3 = FUN_00701c28(&DAT_00700d94,1,iVar4 * 2 + 1,iVar4 * 2 + 1);
    FUN_00702e40(uVar3,0,0,0,iVar4 * 2 + 1,iVar4 * 2 + 1,param_4 - iVar4,param_5 - iVar4,
                 *(undefined4 *)(param_1 + 0x38));
    FUN_005b08f4(uVar3,*(byte *)(*(int *)PTR_DAT_00781e14 + 0x718) >> 1,1);
    FUN_007034e0(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704),param_5 - iVar4,param_4 - iVar4,
                 *(undefined4 *)(param_1 + 0x48),uVar3);
    FUN_00405a7c(uVar3);
  }
  FUN_00644e28(*(undefined4 *)PTR_DAT_00781e14);
  FUN_004eed28(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x5dc));
  *(undefined1 *)(*(int *)PTR_DAT_00781e14 + 0x70d) = 1;
  *(int *)(param_1 + 0xc) = param_5;
  *(int *)(param_1 + 0x10) = param_4;
  *(int *)(param_1 + 4) = param_5;
  *(int *)(param_1 + 8) = param_4;
  if ((param_3 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}

// rea decompile_all
// name: FUN_00402cc4
// address: 0x402cc4
// body: available
// range: 0x402cc4-0x402e0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00402cc4(int param_1,uint param_2)

{
  LPVOID pvVar1;
  int iVar2;
  uint uVar3;
  LPCVOID lpAddress;
  uint uVar4;
  uint uVar5;
  _MEMORY_BASIC_INFORMATION local_2c;

  uVar4 = (*(uint *)(param_1 + -4) & 0xfffffff0) - 0x14;
  if (uVar4 < param_2) {
    uVar3 = (uVar4 >> 2) + uVar4;
    uVar5 = param_2;
    if (param_2 < uVar3) {
      uVar5 = uVar3;
    }
    lpAddress = (LPCVOID)(param_1 + -0x10 + (*(uint *)(param_1 + -4) & 0xfffffff0));
    VirtualQuery(lpAddress,&local_2c,0x1c);
    if ((local_2c.State == 0x10000) &&
       (local_2c.RegionSize = local_2c.RegionSize & 0xffff0000,
       param_2 - uVar4 < local_2c.RegionSize)) {
      uVar4 = (uVar5 - uVar4) + 0xffff & 0xffff0000;
      if (local_2c.RegionSize < uVar4) {
        uVar4 = local_2c.RegionSize;
      }
      pvVar1 = VirtualAlloc(lpAddress,uVar4,0x2000,4);
      if ((pvVar1 != (LPVOID)0x0) &&
         (pvVar1 = VirtualAlloc(lpAddress,uVar4,0x1000,4), pvVar1 != (LPVOID)0x0)) {
        *(uint *)(param_1 + -8) = param_2;
        *(uint *)(param_1 + -4) = uVar4 + *(int *)(param_1 + -4) | 8;
        return param_1;
      }
    }
    iVar2 = FUN_00402e10(uVar5);
    if (iVar2 != 0) {
      if (0x40a2c < uVar5) {
        *(uint *)(iVar2 + -8) = param_2;
      }
      FUN_004029a4(param_1,iVar2,*(undefined4 *)(param_1 + -8));
      FUN_00403194(param_1);
    }
  }
  else if (param_2 < uVar4 >> 1) {
    iVar2 = FUN_00402e10(param_2);
    if (iVar2 != 0) {
      if (0x40a2c < param_2) {
        *(uint *)(param_1 + -8) = param_2;
      }
      FUN_004029d4(param_1,iVar2,param_2);
      FUN_00403194(param_1);
    }
  }
  else {
    *(uint *)(param_1 + -8) = param_2;
    iVar2 = param_1;
  }
  return iVar2;
}

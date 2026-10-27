// rea decompile_all
// name: FUN_005ecdd0
// address: 0x5ecdd0
// body: available
// range: 0x5ecdd0-0x5ece2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005ecdd0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint extraout_EDX;

  if (param_2 == (undefined4 *)0x0) {
    if ((param_1 == 0) || (*(uint *)(param_1 + 0x10) < 0xc)) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0x14);
  }
  else {
    uVar1 = FUN_005ecdb0(*param_2);
    uVar2 = uVar1 + (int)param_2;
    if (CARRY4(uVar1,(uint)param_2)) {
      uVar2 = FUN_00405944();
    }
    uVar1 = uVar2 + 0xc;
    if (0xfffffff3 < uVar2) {
      uVar1 = FUN_00405944();
    }
    uVar2 = *(uint *)(param_1 + 0x14) + *(uint *)(param_1 + 0x10);
    if (CARRY4(*(uint *)(param_1 + 0x14),*(uint *)(param_1 + 0x10))) {
      uVar1 = FUN_00405944();
      uVar2 = extraout_EDX;
    }
    if (uVar2 < uVar1) {
      iVar3 = 0;
    }
    else {
      uVar1 = FUN_005ecdb0(*param_2);
      iVar3 = uVar1 + (int)param_2;
      if (CARRY4(uVar1,(uint)param_2)) {
        iVar3 = FUN_00405944(iVar3);
      }
    }
  }
  return iVar3;
}

// rea decompile_all
// name: FUN_005ee480
// address: 0x5ee480
// body: available
// range: 0x5ee480-0x5ee4dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ee480(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;

  iVar3 = param_1[0x9c];
  iVar1 = 0;
  do {
    if (iVar1 == *(int *)(iVar3 + 0x20)) {
      uVar2 = 0;
      uVar5 = 0;
LAB_005ee4d3:
      *param_3 = uVar2;
      param_3[1] = uVar5;
      return;
    }
    if (param_2 == *(int *)(*(int *)(iVar3 + 0x24) + iVar1 * 4)) {
      if ((*(uint *)(iVar3 + 0x30) < 0x191) || (uVar4 = *(uint *)(iVar3 + 0x50), uVar4 == 0)) {
        FUN_00405f68(*param_1);
        iVar3 = FUN_00405fa4();
        uVar4 = iVar3 + 7U & 0xfffffff8;
      }
      uVar5 = *(undefined4 *)((int)param_1 + iVar1 * 8 + uVar4 + 4);
      uVar2 = *(undefined4 *)((int)param_1 + iVar1 * 8 + uVar4);
      goto LAB_005ee4d3;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

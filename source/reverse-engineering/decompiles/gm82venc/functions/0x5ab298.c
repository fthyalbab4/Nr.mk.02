// rea decompile_all
// name: FUN_005ab298
// address: 0x5ab298
// body: available
// range: 0x5ab298-0x5ab32e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ab298(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,
                 int param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;

  iVar1 = *(int *)(param_1 + 0x1b0);
  if (*(int *)(iVar1 + 0x18) == 0) {
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x14),0,
                       *(undefined4 *)(iVar1 + 0x10));
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
  }
  uVar4 = *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0x18);
  if ((uint)(param_4 - *param_5) < uVar4) {
    uVar4 = param_4 - *param_5;
  }
  uVar3 = *(int *)(param_1 + 0x74) - *(int *)(iVar1 + 0x14);
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  (**(code **)(*(int *)(param_1 + 0x1cc) + 4))
            (param_1,*(int *)(iVar1 + 0x18) * 4 + *(int *)(iVar1 + 0xc),*param_5 * 4 + param_6,uVar4
            );
  *param_5 = *param_5 + uVar4;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + uVar4;
  if (*(uint *)(iVar1 + 0x10) <= *(uint *)(iVar1 + 0x18)) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + *(uint *)(iVar1 + 0x10);
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  return;
}

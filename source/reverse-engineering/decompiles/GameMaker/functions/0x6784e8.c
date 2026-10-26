// rea decompile_all
// name: FUN_006784e8
// address: 0x6784e8
// body: available
// range: 0x6784e8-0x67857a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006784e8(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = *param_2;
  if (iVar1 < 0x204) {
    if (iVar1 != 0x7b) {
      if (2 < iVar1 - 0x200U) {
        if (iVar1 != 0x203) {
          return 0;
        }
        if ((param_1[0x6d] != 0) && (iVar1 = FUN_00673fd0(param_1[0x6d]), iVar1 != 0)) {
          uVar2 = FUN_00673fd0(param_1[0x6d]);
          (**(code **)(*DAT_0077f38c + 0x10))(DAT_0077f38c,uVar2);
        }
        return 1;
      }
LAB_0067853e:
      (**(code **)(*param_1 + -0x14))();
      return 1;
    }
  }
  else if (1 < iVar1 - 0x204U) {
    if ((1 < iVar1 - 0xb013U) && (iVar1 - 0xb013U != 0x1c)) {
      return 0;
    }
    goto LAB_0067853e;
  }
  if ((param_1[0x6d] != 0) && (*(int *)(param_1[0x6d] + 0x1c) != 0)) {
    return 1;
  }
  return 0;
}

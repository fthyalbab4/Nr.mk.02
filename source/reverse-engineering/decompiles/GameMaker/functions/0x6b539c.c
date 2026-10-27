// rea decompile_all
// name: FUN_006b539c
// address: 0x6b539c
// body: available
// range: 0x6b539c-0x6b5441 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b539c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = FUN_006bb180(param_1);
  *(undefined4 *)(param_1 + 0x350) = uVar1;
  uVar1 = FUN_0048e048(&PTR_FUN_0048ab50,1,param_2);
  *(undefined4 *)(param_1 + 0x354) = uVar1;
  FUN_0048e204(uVar1);
  FUN_0048e1f4(*(undefined4 *)(param_1 + 0x354),0x32);
  FUN_0048e1e4(*(undefined4 *)(param_1 + 0x354),1);
  uVar1 = FUN_0048e048(&PTR_FUN_0048ab50,1,param_2);
  *(undefined4 *)(param_1 + 0x358) = uVar1;
  FUN_0048e204(uVar1);
  iVar2 = *(int *)PTR_DAT_00781f5c;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  FUN_0048e1f4(*(undefined4 *)(param_1 + 0x358),iVar2);
  FUN_0048e1e4(*(undefined4 *)(param_1 + 0x358),1);
  return;
}

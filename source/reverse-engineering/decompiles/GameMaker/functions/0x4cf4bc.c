// rea decompile_all
// name: FUN_004cf4bc
// address: 0x4cf4bc
// body: available
// range: 0x4cf4bc-0x4cf50e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cf4bc(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined2 extraout_var;

  FUN_00407eb8(param_2,0);
  if (param_1 != 0) {
    FUN_0040839c(param_2,param_1,&DAT_004cf51c);
    uVar1 = FUN_00407f44(*param_2);
    for (puVar2 = (undefined2 *)thunk_FUN_00417a42(uVar1,CONCAT22(extraout_var,0x7c));
        puVar2 != (undefined2 *)0x0; puVar2 = (undefined2 *)thunk_FUN_00417a42(puVar2 + 1,0x7c)) {
      *puVar2 = 0;
    }
  }
  return;
}

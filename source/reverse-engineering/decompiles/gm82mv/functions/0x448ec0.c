// rea decompile_all
// name: FUN_00448ec0
// address: 0x448ec0
// body: available
// range: 0x448ec0-0x448f3f inclusive
// range: 0x448f47-0x448f4b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x448eee (push 0x448f40 followed by fs-segment stack chaining); handler 0x448f40 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00448ec0(uint *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *local_10;

  if ((*param_1 & 0xfffffffe) == 0) {
    return;
  }
  uStack_18 = 0x448ee0;
  local_10 = (int *)FUN_00448df4(param_1);
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = (int *)*local_10;
  piVar2 = *(int **)*local_10;
  do {
    if (piVar2 == local_10) {
LAB_00448f10:
      if (((piVar2 == local_10) && (piVar2 == param_2)) &&
         (local_10 = piVar1, piVar2 == (int *)*piVar2)) {
        local_10 = (int *)0x0;
      }
      *in_FS_OFFSET = uStack_20;
      uStack_18 = 0x448f47;
      uStack_1c = 0x448f3f;
      FUN_00449044(param_1,local_10,&stack0xfffffffc);
      return;
    }
    if (piVar2 == param_2) {
      *piVar1 = *piVar2;
      goto LAB_00448f10;
    }
    piVar1 = piVar2;
    piVar2 = (int *)*piVar2;
  } while( true );
}

// rea decompile_all
// name: FUN_0041eed8
// address: 0x41eed8
// body: available
// range: 0x41eed8-0x41ef49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041eed8(int param_1,char param_2)

{
  HANDLE pvVar1;
  undefined4 uVar2;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    cVar3 = extraout_DL;
  }
  FUN_00405fac(param_1,0);
  *(undefined4 *)(param_1 + 0xc) = 0xffff;
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,-1,-1,(LPCWSTR)0x0);
  *(HANDLE *)(param_1 + 0x10) = pvVar1;
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  *(HANDLE *)(param_1 + 0x14) = pvVar1;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  uVar2 = FUN_00405fac(&DAT_00412958,1);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  if (cVar3 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

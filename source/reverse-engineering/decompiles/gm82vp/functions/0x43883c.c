// rea decompile_all
// name: FUN_0043883c
// address: 0x43883c
// body: available
// range: 0x43883c-0x4388af inclusive
// range: 0x4388b9-0x4388be inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43888b (push 0x4388b0 followed by fs-segment stack chaining); handler 0x4388b0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043883c(undefined4 param_1,HMODULE param_2,undefined4 *param_3)

{
  LPCWSTR lpName;
  HRSRC pHVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  LPCWSTR lpType;
  undefined1 *puVar5;

  puVar5 = &stack0xfffffffc;
  if (param_2 == (HMODULE)0x0) {
    param_2 = DAT_0068cc40;
  }
  lpType = (LPCWSTR)0xa;
  lpName = (LPCWSTR)FUN_00408220(param_1);
  pHVar1 = FindResourceW(param_2,lpName,lpType);
  if (pHVar1 != (HRSRC)0x0) {
    uVar2 = FUN_0043d6bc(&LAB_00431c14,1,param_2);
    uVar4 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe0;
    uVar3 = FUN_0043cbec(uVar2,*param_3);
    *param_3 = uVar3;
    *in_FS_OFFSET = uVar4;
    FUN_00405fdc(uVar2,uVar4,puVar5);
    return;
  }
  return;
}

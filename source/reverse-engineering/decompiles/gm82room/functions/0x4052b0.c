// rea decompile_all
// name: FUN_004052b0
// address: 0x4052b0
// body: available
// range: 0x4052b0-0x405313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_004052b0(undefined4 param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 local_1c [8];
  undefined2 local_14 [2];

  iVar3 = 0;
  do {
    uVar1 = FUN_0040505c(param_1);
    local_1c[iVar3] = uVar1;
    iVar4 = iVar3 + 1;
    local_1c[iVar3 + 1] = 0;
    cVar2 = FUN_00405288(local_1c,iVar4);
    if (cVar2 != '\0') {
      FUN_00407454(local_14,1,local_1c,_DAT_0068a8d0,iVar4);
      return local_14[0];
    }
    iVar3 = iVar4;
  } while (iVar4 < 7);
  FUN_004044ac(0x6a);
  return 0;
}

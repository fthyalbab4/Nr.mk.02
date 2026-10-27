// rea decompile_all
// name: FUN_0056b39c
// address: 0x56b39c
// body: available
// range: 0x56b39c-0x56b4ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0056b39c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_14;

  local_14 = -1;
  for (iVar3 = 0; (iVar3 < DAT_006869a4 && (*(char *)(DAT_0084527c + 0xc + iVar3 * 0x14) != '\0'));
      iVar3 = iVar3 + 1) {
  }
  if (iVar3 == DAT_006869a4) {
    FUN_00409dfc(&DAT_0084527c,&DAT_0056b35c,1,DAT_006869a4 + 1);
    DAT_006869a4 = DAT_006869a4 + 1;
    *(undefined1 *)(DAT_0084527c + 0xc + iVar3 * 0x14) = 0;
  }
  uVar1 = FUN_00620a68(param_1,param_2,1);
  *(undefined4 *)(DAT_0084527c + iVar3 * 0x14) = uVar1;
  if (-1 < *(int *)(DAT_0084527c + iVar3 * 0x14)) {
    FUN_0040b268(DAT_0084527c + 0x10 + iVar3 * 0x14);
    FUN_0056b388(param_2);
    FUN_0056b388(param_1);
    iVar2 = (**(code **)(**(int **)PTR_DAT_00689570 + 0x68))();
    if (iVar2 != 0) {
      FUN_0040b268(DAT_0084527c + 0x10 + iVar3 * 0x14);
      FUN_0056b388(param_2);
      FUN_0056b388(param_1);
      iVar2 = (**(code **)(**(int **)PTR_DAT_00689570 + 0x68))();
      if (iVar2 != 0) {
        FUN_006210d0(*(undefined4 *)(DAT_0084527c + iVar3 * 0x14));
        *(undefined4 *)(DAT_0084527c + iVar3 * 0x14) = 0xffffffff;
        return -1;
      }
    }
    *(undefined4 *)(DAT_0084527c + 4 + iVar3 * 0x14) = param_1;
    *(undefined4 *)(DAT_0084527c + 8 + iVar3 * 0x14) = param_2;
    *(undefined1 *)(DAT_0084527c + 0xc + iVar3 * 0x14) = 1;
    local_14 = iVar3;
  }
  return local_14;
}

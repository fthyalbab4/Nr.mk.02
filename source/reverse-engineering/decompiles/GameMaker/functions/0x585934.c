// rea decompile_all
// name: FUN_00585934
// address: 0x585934
// body: available
// range: 0x585934-0x5859a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00585934(void)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  FUN_00409be0(&DAT_007889a0,&DAT_00585914,1,0x100);
  uVar5 = 0;
  iVar3 = 0xe;
  pcVar1 = &DAT_0077c4f4;
  do {
    uVar5 = uVar5 | 1 << (0x1fU - *pcVar1 & 0x1f);
    pcVar1 = pcVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar4 = 0;
  do {
    iVar3 = 8;
    uVar2 = uVar4;
    do {
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar2 >> 1;
      }
      else {
        uVar2 = uVar2 >> 1 ^ uVar5;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(uint *)(DAT_007889a0 + uVar4 * 4) = uVar2;
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x100);
  return;
}

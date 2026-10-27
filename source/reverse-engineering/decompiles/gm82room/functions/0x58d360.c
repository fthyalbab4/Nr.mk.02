// rea decompile_all
// name: FUN_0058d360
// address: 0x58d360
// body: available
// range: 0x58d360-0x58d3fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058d360(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 local_6c [26];

  bVar6 = 0;
  cVar2 = FUN_0058d584(param_1);
  if (cVar2 != '\0') {
    cVar2 = FUN_0058ba8c(param_2);
    if (cVar2 != '\0') {
      iVar1 = DAT_00686b30 + param_1 * 0x58;
      if (0 < param_3) {
        do {
          iVar3 = FUN_00409c34(*(undefined4 *)(iVar1 + 4));
          if (iVar3 <= *(int *)(iVar1 + 8)) {
            FUN_00409dfc(iVar1 + 4,&DAT_0058af58,1,*(int *)(iVar1 + 8) + 100);
          }
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
          FUN_0058b88c(param_2,local_6c);
          puVar4 = local_6c;
          puVar5 = (undefined4 *)(*(int *)(iVar1 + 4) + -0x68 + *(int *)(iVar1 + 8) * 0x68);
          for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
  }
  return;
}

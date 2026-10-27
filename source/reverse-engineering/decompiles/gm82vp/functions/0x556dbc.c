// rea decompile_all
// name: FUN_00556dbc
// address: 0x556dbc
// body: available
// range: 0x556dbc-0x556e4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00556dbc(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 local_10;
  undefined1 local_c;

  cVar1 = FUN_00556e98(param_1,param_1 + 0x88);
  *(char *)(param_1 + 0x84) = cVar1;
  if (cVar1 == '\0') {
    uVar2 = FUN_00556f14(param_1,param_1 + 0x88);
    *(undefined1 *)(param_1 + 0x84) = uVar2;
  }
  if (*(char *)(param_1 + 0x84) != '\0') {
    iVar3 = FUN_005562cc(&PTR_LAB_0055578c,1,*(undefined4 *)(param_1 + 0x88));
    *(int *)(param_1 + 0x8c) = iVar3;
    if (*(char *)(iVar3 + 0x20) == '\0') {
      FUN_00556e64(param_1);
      if (*(char *)(param_1 + 0x54) == '\0') {
        local_10 = *(undefined4 *)(param_1 + 0x14);
        local_c = 0x11;
        FUN_0041bf50(&LAB_00545a40,1,PTR_LAB_0068910c,0,&local_10);
        FUN_00406ab4();
      }
    }
  }
  return;
}

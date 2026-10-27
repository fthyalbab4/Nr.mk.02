// rea decompile_all
// name: FUN_005bd094
// address: 0x5bd094
// body: available
// range: 0x5bd094-0x5bd15f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bd0b5 (push 0x5bd160 followed by fs-segment stack chaining); handler 0x5bd160 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bd094(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 local_1c [24];

  puStack_28 = (undefined1 *)0x5bd0aa;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_2c = &LAB_005bd160;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  uStack_34 = 0x5bd0cc;
  puStack_28 = &stack0xfffffffc;
  cVar2 = FUN_004a1de8(L"Execute some code.",&PTR_DAT_005bd17c,&DAT_00687538);
  if ((cVar2 != '\0') && (DAT_00687538 != 0)) {
    uStack_34 = 0;
    uVar3 = FUN_00616588(&DAT_006160fc,1,DAT_00687538);
    cVar2 = FUN_00616664(uVar3);
    if (cVar2 == '\0') {
      FUN_004a17e4(L"COMPILE ERROR");
      FUN_00405fdc(uVar3);
    }
    else {
      uVar4 = FUN_0060d2cc(&DAT_0060b63c,1,0,0,0,0,0,0);
      FUN_0058869c(uVar4,uVar4,uVar3,local_1c);
      FUN_00405fdc(uVar4);
      FUN_00405fdc(uVar3);
    }
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005bd167;
  uStack_30 = 0x5bd15f;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}

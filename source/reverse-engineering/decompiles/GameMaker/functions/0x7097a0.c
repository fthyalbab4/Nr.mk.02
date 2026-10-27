// rea decompile_all
// name: FUN_007097a0
// address: 0x7097a0
// body: available
// range: 0x7097a0-0x709880 inclusive
// range: 0x70988b-0x7098ad inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7097b7 (push 0x7098ae followed by fs-segment stack chaining); handler 0x7098ae lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7097d9 (push 0x709881 followed by fs-segment stack chaining); handler 0x709881 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007097a0(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_007098ae;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x7097cb;
  local_8 = FUN_00452480(&DAT_004512d4,1);
  puStack_30 = &LAB_00709881;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_00452568(local_8,0x80000001);
  cVar2 = FUN_004526b0(local_8,L"Software",1);
  if (cVar2 != '\0') {
    cVar2 = FUN_004526b0(local_8,L"Classes",1);
    if (cVar2 != '\0') {
      cVar2 = FUN_004526b0(local_8,L"Applications",1);
      if (cVar2 != '\0') {
        cVar2 = FUN_004526b0(local_8,L"java.exe",1);
        if (cVar2 != '\0') {
          cVar2 = FUN_004526b0(local_8,L"jnode12",1);
          if (cVar2 != '\0') {
            FUN_006e2324(local_10,&local_c);
            FUN_00452fc8(local_8,L"code",local_c);
            FUN_00452538(local_8);
          }
        }
      }
    }
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = (undefined1 *)0x709893;
  FUN_00405a7c(local_8,uStack_34,puVar1);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_007098b5;
  puStack_24 = (undefined1 *)0x7098ad;
  thunk_FUN_00406e80(&local_10,2,puVar1);
  return;
}
